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
        std::string speed_data = "linear.x: " + std::to_string(Speed->linear.x) + ", angular.z: " + std::to_string(Speed->angular.z);
        ser->write(speed_data);
        ROS_INFO("Speed data sent to serial: %s", speed_data.c_str());
    }
}

void sendSpeedData(double linear_x, double angular_z) {
    geometry_msgs::Twist speed;
    speed.linear.x = linear_x;
    speed.angular.z = angular_z;
    std::string speed_data = "linear.x: " + std::to_string(speed.linear.x) + ", angular.z: " + std::to_string(speed.angular.z);
    ser->write(speed_data);
    ROS_INFO("Speed data sent to serial: %s", speed_data.c_str());
}

void executeAutoworkState() {
    ros::Rate rate(1);
    ros::Time start_time = ros::Time::now();

    while (ros::Time::now() - start_time < ros::Duration(10.0)) {
        if (ser->available()) {
            std::string feedback = ser->readline();
            if (feedback == AUTOStateToString(AUTOState::telecontrol)) {
                ROS_INFO("Received telecontrol command during autowork state. Exiting autowork.");
                cur_state = AUTOState::telecontrol;
                return;
            }
        }
        sendSpeedData(0.5, 0.0);
        rate.sleep();
    }

    sendSpeedData(0.0, 0.0);
    ros::Duration(1).sleep();

    start_time = ros::Time::now();
    while (ros::Time::now() - start_time < ros::Duration(2.0)) {
        if (ser->available()) {
            std::string feedback = ser->readline();
            if (feedback == AUTOStateToString(AUTOState::telecontrol)) {
                ROS_INFO("Received telecontrol command during autowork state. Exiting autowork.");
                cur_state = AUTOState::telecontrol;
                return;
            }
        }
        sendSpeedData(0.0, M_PI / 2.0);
        rate.sleep();
    }

    sendSpeedData(0.0, 0.0);
    ros::Duration(1).sleep();

    start_time = ros::Time::now();
    while (ros::Time::now() - start_time < ros::Duration(2.0)) {
        if (ser->available()) {
            std::string feedback = ser->readline();
            if (feedback == AUTOStateToString(AUTOState::telecontrol)) {
                ROS_INFO("Received telecontrol command during autowork state. Exiting autowork.");
                cur_state = AUTOState::telecontrol;
                return;
            }
        }
        sendSpeedData(0.5, 0.0);
        rate.sleep();
    }

    sendSpeedData(0.0, 0.0);
    ros::Duration(1).sleep();

    start_time = ros::Time::now();
    while (ros::Time::now() - start_time < ros::Duration(10.0)) {
        if (ser->available()) {
            std::string feedback = ser->readline();
            if (feedback == AUTOStateToString(AUTOState::telecontrol)) {
                ROS_INFO("Received telecontrol command during autowork state. Exiting autowork.");
                cur_state = AUTOState::telecontrol;
                return;
            }
        }
        sendSpeedData(0.5, 0.0);
        rate.sleep();
    }

    sendSpeedData(0.0, 0.0);
}

void processFeedback(const std::string &feedback) {
    if (feedback == AUTOStateToString(AUTOState::telecontrol)) {
        ROS_INFO("PC has received telecontrol command.");
        cur_state = AUTOState::waiting;
        std::string output = "#switch to telecontrol,OK\n";
        ROS_INFO("Sending response: %s", output.c_str());
        ser->write(output);
        ros::Duration(1).sleep();
    } else if (feedback == AUTOStateToString(AUTOState::autowork)) {
        cur_state = AUTOState::autowork;
        ROS_INFO("Switched to autowork state.");
        executeAutoworkState();
    } else {
        ROS_INFO("Unknown feedback received: %s", feedback.c_str());
    }
}

void StateChangeCallback(const std_msgs::String::ConstPtr& msg) {
    if (msg->data == "telecontrol") {
        ROS_INFO("Received state change to telecontrol. Restarting node...");
        ros::shutdown(); // 停止当前节点
        std::string command = "rosrun your_package your_node"; // 修改为实际的包名和节点名
        system(command.c_str()); // 启动新节点
    }
}

int main(int argc, char *argv[]) {
    // 初始化节点信息
    setlocale(LC_ALL, "");
    ros::init(argc, argv, "serial_node");
    ros::NodeHandle nh_serial;
    ros::NodeHandle nh_speed;
    ros::NodeHandle nh_state;

    ros::Subscriber twist_sub = nh_speed.subscribe<geometry_msgs::Twist>("Speed", 1, &SpeedCallback);
    ros::Subscriber state_sub = nh_state.subscribe<std_msgs::String>("state_change", 1, &StateChangeCallback);

    std::string serial_port = "/dev/ttyS0";  
    int serial_baudrate = 115200;                                        
    ros::Rate rate(1);

    ser = new serial::Serial();

    // 初始化串口
    try {
        ser->setPort(serial_port);
        ser->setBaudrate(serial_baudrate);
        serial::Timeout to = serial::Timeout::simpleTimeout(1000);
        ser->setTimeout(to);
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

    while (ros::ok) {
        if (ser->isOpen()) {
            std::string feedback = ser->readline();
            ROS_INFO("PC received: %s", feedback.c_str());
            if (feedback.length() > 1) {
                processFeedback(feedback);
            }
        }
        ros::spinOnce();  // 确保处理回调函数
        rate.sleep();
    }

    return 0;
}
