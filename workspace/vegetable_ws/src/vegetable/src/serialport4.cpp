#include "ros/ros.h"
#include "serial/serial.h"
#include "std_msgs/String.h"
#include "iostream"
#include "string"
#include "geometry_msgs/Twist.h"
#include <thread>
#include <mutex>
#include <condition_variable>

void SpeedCallback(const geometry_msgs::Twist::ConstPtr& Speed);

enum class AUTOState {
    waiting = 0,
    telecontrol = 1,
    autowork = 2
};

serial::Serial *ser = nullptr;
AUTOState cur_state = AUTOState::waiting; // 当前状态
std::mutex mtx;
std::condition_variable cv;
bool stop_autowork = false;

std::string AUTOStateToString(AUTOState state) {
    static std::map<AUTOState, std::string> stateMap = {
        {AUTOState::waiting, "waiting"},
        {AUTOState::telecontrol, "telecontrol"},
        {AUTOState::autowork, "autowork"}
    };
    return stateMap[state];
}

void SpeedCallback(const geometry_msgs::Twist::ConstPtr& Speed) {
    if (cur_state == AUTOState::autowork && ser != nullptr) {
        // 在 autowork 状态下，处理速度信息并写入串口
        std::string speed_data = "linear.x: " + std::to_string(Speed->linear.x) + ", angular.z: " + std::to_string(Speed->angular.z);
        ser->write(speed_data);
        ROS_INFO("Speed data sent to serial: %s", speed_data.c_str());
    }
}

void processFeedback(const std::string &feedback) {
    std::unique_lock<std::mutex> lock(mtx);
    if (feedback == "telecontrol") {
        ROS_INFO("Received telecontrol command.");
        cur_state = AUTOState::telecontrol;
        stop_autowork = true;
        cv.notify_all();
    } else if (feedback == "autowork") {
        ROS_INFO("Received autowork command.");
        cur_state = AUTOState::autowork;
        stop_autowork = false;
        cv.notify_all();
    } else {
        ROS_INFO("Unknown feedback received: %s", feedback.c_str());
    }
}

void performAction(geometry_msgs::Twist &speed, ros::Rate &r, ros::Duration duration, double linear_x, double angular_z) {
    ros::Time start_time = ros::Time::now();
    while (ros::Time::now() - start_time < duration) {
        {
            std::unique_lock<std::mutex> lock(mtx);
            if (cur_state == AUTOState::telecontrol) {
                ROS_INFO("Switching to telecontrol, stopping current action.");
                break;
            }
        }
        speed.linear.x = linear_x;
        speed.angular.z = angular_z;
        std::string speed_data = "linear.x: " + std::to_string(speed.linear.x) + ", angular.z: " + std::to_string(speed.angular.z);
        ser->write(speed_data);
        ROS_INFO("Speed data sent to serial: %s", speed_data.c_str());
        r.sleep();
    }
    speed.linear.x = 0.0;
    speed.angular.z = 0.0;
    std::string stop_data = "linear.x: " + std::to_string(speed.linear.x) + ", angular.z: " + std::to_string(speed.angular.z);
    ser->write(stop_data);
    ROS_INFO("Stop action sent to serial: %s", stop_data.c_str());
}

void autoworkThread() {
    ros::Rate r(1); // 1 Hz
    geometry_msgs::Twist speed;
    while (ros::ok()) {
        std::unique_lock<std::mutex> lock(mtx);
        cv.wait(lock, []{ return cur_state == AUTOState::autowork || !ros::ok(); });

        if (!ros::ok()) break;

        if (cur_state == AUTOState::autowork) {
            // Perform actions
            performAction(speed, r, ros::Duration(10.0), 0.5, 0.0); // 直线前进10秒
            if (cur_state != AUTOState::autowork) continue;

            performAction(speed, r, ros::Duration(2.0), 0.0, M_PI / 2.0); // 角速度转弯90度
            if (cur_state != AUTOState::autowork) continue;

            performAction(speed, r, ros::Duration(2.0), 0.5, 0.0); // 直线前进2秒
            if (cur_state != AUTOState::autowork) continue;

            performAction(speed, r, ros::Duration(10.0), 0.5, 0.0); // 线速度前进10秒
            if (cur_state != AUTOState::autowork) continue;
        }
    }
}

void serialReadThread() {
    ros::Rate rate(10); // 10 Hz
    while (ros::ok()) {
        if (ser->isOpen() && ser->available()) {
            std::string feedback = ser->readline();
            ROS_INFO("PC received: %s", feedback.c_str());
            processFeedback(feedback);
        }
        ros::spinOnce();
        rate.sleep();
    }
}

int main(int argc, char *argv[]) {
    setlocale(LC_ALL, "");
    ros::init(argc, argv, "serial_node");
    ros::NodeHandle nh_serial;
    ros::NodeHandle nh_speed;

    ros::Subscriber twist_sub = nh_speed.subscribe<geometry_msgs::Twist>("Speed", 1, &SpeedCallback);

    std::string serial_port = "/dev/ttyS0";  
    int serial_baudrate = 115200;                                        
    int control_rate = 10;

    ser = new serial::Serial();

    // 初始化串口
    try {
        ser->setPort(serial_port);
        ser->setBaudrate(serial_baudrate);
        serial::Timeout to = serial::Timeout::simpleTimeout(1000 * 0.5 / control_rate);
        ser->setTimeout(to);
        ser->open();

        if (!ser->isOpen()) {
            throw serial::PortNotOpenedException("Failed to open serial port");
        }
    }
    catch(const serial::IOException& e) {
        ROS_ERROR_STREAM("Unable to open port ");
        return -1;
    }
    catch(const std::exception& e) {
        ROS_WARN("ERROR: fail to open control serial port!");
        std::cerr << e.what() << '\n';
        return -1;
    }

    ROS_INFO("Serial port is ok.");

    std::thread autowork_thread(autoworkThread);
    std::thread serial_read_thread(serialReadThread);

    ros::spin();

    if (autowork_thread.joinable()) {
        autowork_thread.join();
    }
    if (serial_read_thread.joinable()) {
        serial_read_thread.join();
    }

    delete ser;
    return 0;
}
