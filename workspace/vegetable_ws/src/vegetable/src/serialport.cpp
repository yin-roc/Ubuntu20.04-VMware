#include "ros/ros.h"
#include "serial/serial.h"
#include "std_msgs/String.h"
#include "iostream"
#include "string"
#include "geometry_msgs/Twist.h"


enum class AUTOState{
    waiting = 0,
    telecontrol = 1,
    autowork = 2
};


serial::Serial *ser = nullptr;
AUTOState cur_state = AUTOState::waiting; // 当前状态
void SpeedCallback(const geometry_msgs::Twist::ConstPtr& Speed);
std::string AUTOStateToString(AUTOState state); 
void Autowork();


// std::vector<std::string> AUTOState = {"waiting", "telecontrol", "autowork"};


int main(int argc, char *argv[])
{
    // 初始化节点信息
    setlocale(LC_ALL, "");
    ros::init(argc, argv, "serial_node");
    ros::NodeHandle nh_serial;
    ros::NodeHandle nh_speed;

    ros::Subscriber twist_sub = nh_speed.subscribe<geometry_msgs::Twist>("Speed", 1, &SpeedCallback);

    std::string serial_port = "/dev/ttyS0";  
    int serial_baudrate = 115200;                                        
    int control_rate = 10;
    std::string output; 
    ros::Rate rate(1);

    ser = new serial::Serial();

    // 初始化串口
    try{
        ser->setPort(serial_port);
        ser->setBaudrate(serial_baudrate);
        // ser->setTimeout(1000 * 0.5 / control_rate, 0, 0, 0, 0);
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
    catch(const std::exception& e){
        ROS_WARN("ERROR: fail to open control serial port!");
        std::cerr << e.what() << '\n';
    }

    ROS_INFO("serial port is ok.");

    while (ros::ok)
    {
        // try {
            if (ser->isOpen()) {
                std::string feedback = ser->readline();
                ROS_INFO("PC received: %s", feedback.c_str());
                if(feedback.length() > 1){
                    if (feedback == AUTOStateToString(AUTOState::telecontrol)) {
                        ROS_INFO("PC has received telecontrol command.");
                        cur_state = AUTOState::waiting;
                        output = "#switch to telecontrol,OK\n";
                        ROS_INFO("Sending response: %s", output.c_str());
                        ser->write(output);
                        ros::Duration(1).sleep();
                    } else if (feedback == AUTOStateToString(AUTOState::autowork)) {
                        ROS_INFO("Pc has switched to autowork state.");
                        cur_state = AUTOState::autowork;
                        output = "#switch to autowork,OK\n";
                        ROS_INFO("Sending response: %s", output.c_str());
                        ser->write(output);
                        Autowork();
                        ros::Duration(1).sleep();
                    } 
                    else {
                        ROS_INFO("Wrong!");

                        // 路线规划
                    }
                }
                
            }
        // } catch (const serial::IOException& e) {
        //     ROS_ERROR("Serial read error: %s", e.what());
        // } catch (const std::exception& e) {
        //     ROS_ERROR("Error: %s", e.what());
        // }
        // ros::spinOnce();  // 确保处理回调函数

        rate.sleep();
    }

    
    return 0;
}


void SpeedCallback(const geometry_msgs::Twist::ConstPtr& Speed){
    // ROS_INFO("回调函数执行");
    // ROS_INFO("Current speed is linear.x: %f, angular.z: %f", Speed->linear.x, Speed->angular.z);
    if (cur_state == AUTOState::autowork && ser != nullptr) {
        // 只有在 autowork 状态下，才处理速度信息并写入串口
        std::string speed_data = "linear.x: " + std::to_string(Speed->linear.x) + ", angular.z: " + std::to_string(Speed->angular.z);
        ser->write(speed_data);
        ROS_INFO("Speed data sent to serial: %s", speed_data.c_str());
    }

}


std::string AUTOStateToString(AUTOState state) {
    static std::map<AUTOState, std::string> stateMap = {
        {AUTOState::waiting, "waiting"},
        {AUTOState::telecontrol, "telecontrol"},
        {AUTOState::autowork, "autowork"}
    };
    return stateMap[state];
}


void Autowork(){
    
}



