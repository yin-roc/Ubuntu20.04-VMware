#include "ros/ros.h"
#include "serial/serial.h"
#include "std_msgs/String.h"
#include "geometry_msgs/Twist.h"

enum class AUTOState {
    waiting = 0,
    telecontrol = 1,
    autowork = 2
};

serial::Serial *ser = nullptr;
AUTOState cur_state = AUTOState::waiting; // 当前状态

void SpeedCallback(geometry_msgs::Twist speed) {
    if (cur_state == AUTOState::autowork && ser != nullptr) {
        // // 在 autowork 状态下，处理速度信息并写入串口
        // std::string speed_data = "linear.x: " + std::to_string(speed.linear.x) + ", angular.z: " + std::to_string(speed.angular.z);
        // ser->write(speed_data);
        // ROS_INFO("Speed data sent to serial: %s", speed_data.c_str());

        ROS_INFO("Switched to autowork state.");
                        start_time = ros::Time::now();
                        std::string speed_data;                        

                        while (ros::Time::now() - start_time < ros::Duration(10.0))
                        {
                            speed.linear.x = 0.5;  // 设置线速度
                            speed.angular.z = 0.0;  // 无角速度
                            speed_data = "linear.x: " + std::to_string(speed.linear.x) + ", angular.z: " + std::to_string(speed.angular.z);
                            ser->write(speed_data);
                            ROS_INFO("Speed data sent to serial: %s", speed_data.c_str());
                            // r.sleep();
                        }

                        // 停止运动
                        speed.linear.x = 0.0;
                        speed_data = "linear.x: " + std::to_string(speed.linear.x) + ", angular.z: " + std::to_string(speed.angular.z);
                        ser->write(speed_data);
                        ROS_INFO("Speed data sent to serial: %s", speed_data.c_str());
                        ros::Duration(1).sleep();

                        // 角速度转弯90度
                        start_time = ros::Time::now();
                        while (ros::Time::now() - start_time < ros::Duration(2.0))
                        {
                            speed.linear.x = 0.0;  // 停止线速度
                            speed.angular.z = M_PI / 2.0;  // 设置角速度（90度转弯）
                            speed_data = "linear.x: " + std::to_string(speed.linear.x) + ", angular.z: " + std::to_string(speed.angular.z);
                            ser->write(speed_data);
                            ROS_INFO("Speed data sent to serial: %s", speed_data.c_str());
                            // r.sleep();
                        }

                        // 停止运动
                        speed.angular.z = 0.0;
                        speed_data = "linear.x: " + std::to_string(speed.linear.x) + ", angular.z: " + std::to_string(speed.angular.z);
                        ser->write(speed_data);
                        ROS_INFO("Speed data sent to serial: %s", speed_data.c_str());
                        ros::Duration(1).sleep();

                        // 直线前进2秒
                        start_time = ros::Time::now();
                        while (ros::Time::now() - start_time < ros::Duration(2.0))
                        {
                            speed.linear.x = 0.5;  // 设置线速度
                            speed.angular.z = 0.0;  // 无角速度
                            speed_data = "linear.x: " + std::to_string(speed.linear.x) + ", angular.z: " + std::to_string(speed.angular.z);
                            ser->write(speed_data);
                            ROS_INFO("Speed data sent to serial: %s", speed_data.c_str());
                            // r.sleep();
                        }

                        // 停止运动
                        speed.linear.x = 0.0;
                        speed_data = "linear.x: " + std::to_string(speed.linear.x) + ", angular.z: " + std::to_string(speed.angular.z);
                        ser->write(speed_data);
                        ROS_INFO("Speed data sent to serial: %s", speed_data.c_str());
                        ros::Duration(1).sleep();

                        // 线速度前进10秒
                        start_time = ros::Time::now();
                        while (ros::Time::now() - start_time < ros::Duration(10.0))
                        {
                            speed.linear.x = 0.5;  // 设置线速度
                            speed.angular.z = 0.0;  // 无角速度
                            speed_data = "linear.x: " + std::to_string(speed.linear.x) + ", angular.z: " + std::to_string(speed.angular.z);
                            ser->write(speed_data);
                            ROS_INFO("Speed data sent to serial: %s", speed_data.c_str());
                            // r.sleep();
                        }

                        // 停止运动
                        speed.linear.x = 0.0;
                        speed.angular.z = 0.0;
                        speed_data = "linear.x: " + std::to_string(speed.linear.x) + ", angular.z: " + std::to_string(speed.angular.z);
                        ser->write(speed_data);
                        ROS_INFO("Speed data sent to serial: %s", speed_data.c_str());
    }
}

void processFeedback(const std::string &feedback) {
    if (feedback == "telecontrol") {
        // 接收到 "telecontrol" 信息时，切换到 telecontrol 状态
        ROS_INFO("Received telecontrol command.");
        cur_state = AUTOState::telecontrol;
    } else if (feedback == "autowork") {
        // 接收到 "autowork" 信息时，切换到 autowork 状态
        ROS_INFO("Received autowork command.");
        cur_state = AUTOState::autowork;
    } else {
        ROS_INFO("Unknown feedback received: %s", feedback.c_str());
    }
}

int main(int argc, char *argv[]) {
    // 初始化节点信息
    ros::init(argc, argv, "serial_node");
    ros::NodeHandle nh;
    ros::Time start_time = ros::Time::now();

    // 创建串口读取回调函数
    ros::Subscriber twist_sub = nh.subscribe<geometry_msgs::Twist>("Speed", 1, &SpeedCallback);

    // 打开串口
    ser = new serial::Serial();
    std::string serial_port = "/dev/ttyS0";
    int serial_baudrate = 115200;
    try {
        ser->setPort(serial_port);
        ser->setBaudrate(serial_baudrate);
        ser->open();
        if (!ser->isOpen()) {
            throw serial::PortNotOpenedException("Failed to open serial port");
        }
    } catch(const serial::IOException& e) {
        ROS_ERROR_STREAM("Unable to open port ");
        return -1;
    } catch(const std::exception& e) {
        ROS_WARN("ERROR: fail to open control serial port!");
        std::cerr << e.what() << '\n';
    }

    ROS_INFO("Serial port is ok.");

    ros::Rate rate(1);
    while (ros::ok()) {
        // 检测串口是否可用
        if (ser->isOpen() && ser->available()) {
            // 读取串口信息
            std::string feedback = ser->readline();
            ROS_INFO("PC received: %s", feedback.c_str());
            // 处理串口信息
            processFeedback(feedback);
        }
        ros::spinOnce();  // 处理回调函数
        rate.sleep();
    }

    return 0;
}
