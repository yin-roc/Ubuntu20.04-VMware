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
// void SpeedCallback(const geometry_msgs::Twist::ConstPtr& Speed);
// void processFeedback(const std::string &feedback);
bool serial_init(serial::Serial* m_ser, std::string m_serial_port, int m_serial_baudrate, int m_control_rate);
void default_path(serial::Serial* m_ser, geometry_msgs::Twist m_speed, ros::Time m_start_time, std::string m_speed_data);


std::string AUTOStateToString(AUTOState state) {
    static std::map<AUTOState, std::string> stateMap = {
        {AUTOState::waiting, "waiting"},
        {AUTOState::telecontrol, "telecontrol"},
        {AUTOState::autowork, "autowork"}
    };
    return stateMap[state];
}
// std::vector<std::string> AUTOState = {"waiting", "telecontrol", "autowork"};


// void SpeedCallback(const geometry_msgs::Twist::ConstPtr& Speed){
//     // ROS_INFO("回调函数执行");
//     // ROS_INFO("Current speed is linear.x: %f, angular.z: %f", Speed->linear.x, Speed->angular.z);
//     if (cur_state == AUTOState::autowork && ser != nullptr) {
//         // 只有在 autowork 状态下，才处理速度信息并写入串口
//         std::string speed_data = "linear.x: " + std::to_string(Speed->linear.x) + ", angular.z: " + std::to_string(Speed->angular.z);
//         ser->write(speed_data);
//         ROS_INFO("Speed data sent to serial: %s", speed_data.c_str());
//     }

// }


int main(int argc, char *argv[])
{
    // 初始化节点信息
    setlocale(LC_ALL, "");
    ros::init(argc, argv, "serial_node");
    ros::NodeHandle nh_serial;
    ros::NodeHandle nh_speed;

    // ros::Subscriber twist_sub = nh_speed.subscribe<geometry_msgs::Twist>("Speed", 1, &SpeedCallback);

    std::string serial_port = "/dev/ttyS0";  
    int serial_baudrate = 115200;                                        
    int control_rate = 10;
    std::string output; 
    ros::Time start_time = ros::Time::now();
    geometry_msgs::Twist speed;
    speed.linear.x = 0.0;
    speed.linear.y = 0.0;
    speed.linear.z = 0.0;
    speed.angular.x = 0.0;
    speed.angular.y = 0.0;
    speed.angular.z = 0.0;

    ros::Rate rate(1);
    ros::Rate r(1);

    ser = new serial::Serial();

    // 初始化串口（串口名、波特率、控制频率），打开串口失败则报错
    bool is_serial_ok = serial_init(ser, serial_port, serial_baudrate, control_rate);
    if(is_serial_ok){
        ROS_INFO("serial port is ok.");
    }
    else{
        ROS_INFO("Fail to open serial port");
    }

    while(ros::ok())
    {
        if(ser->isOpen() && ser->available()){
            std::string feedback = ser->readline();
            ROS_INFO("PC received: %s", feedback.c_str());
            if(feedback.length() > 1){
                try{
                    if(feedback == AUTOStateToString(AUTOState::telecontrol)){
                        ROS_INFO("PC has received telecontrol command.");
                        cur_state = AUTOState::waiting;
                        output = "#switch to telecontrol,OK\n";
                        ROS_INFO("Sending response: %s", output.c_str());
                        ser->write(output);
                        ros::Duration(1).sleep();
                    } 
                    else if(feedback == AUTOStateToString(AUTOState::autowork)){
                        cur_state = AUTOState::autowork;
                        ROS_INFO("Switched to autowork state.");
                        start_time = ros::Time::now();
                        std::string speed_data;                         
                        default_path(ser, speed, start_time, speed_data);
                        ros::Duration(1).sleep();
                    } 
                    else{
                        ROS_INFO("Wrong!");
                    }
                }   
                catch (const serial::IOException& e) {
                    ROS_ERROR("Serial read error: %s", e.what());
                } 
                catch (const std::exception& e) {
                    ROS_ERROR("Error: %s", e.what());
                } 
            }     
        } 
        ros::spinOnce();  // 确保处理回调函数
        rate.sleep();
    }

    
    return 0;
}


// void SpeedCallback(const geometry_msgs::Twist::ConstPtr& Speed) {
//     if (cur_state == AUTOState::autowork && ser != nullptr) {
//         // 在 autowork 状态下，处理速度信息并写入串口
//         std::string speed_data = "linear.x: " + std::to_string(Speed->linear.x) + ", angular.z: " + std::to_string(Speed->angular.z);
//         ser->write(speed_data);
//         ROS_INFO("Speed data sent to serial: %s", speed_data.c_str());
//     }
// }


// void processFeedback(const std::string &feedback) {
//     if (feedback == "telecontrol") {
//         // 接收到 "telecontrol" 信息时，切换到 telecontrol 状态
//         ROS_INFO("Received telecontrol command.");
//         cur_state = AUTOState::telecontrol;
//     } else if (feedback == "autowork") {
//         // 接收到 "autowork" 信息时，切换到 autowork 状态
//         ROS_INFO("Received autowork command.");
//         cur_state = AUTOState::autowork;
//     } else {
//         ROS_INFO("Unknown feedback received: %s", feedback.c_str());
//     }
// }


bool serial_init(serial::Serial* m_ser, std::string m_serial_port, int m_serial_baudrate, int m_control_rate){
    try{
        m_ser->setPort(m_serial_port);
        m_ser->setBaudrate(m_serial_baudrate);
        // ser->setTimeout(1000 * 0.5 / control_rate, 0, 0, 0, 0);
        serial::Timeout to = serial::Timeout::simpleTimeout(1000 * 0.5 / m_control_rate);
        m_ser->setTimeout(to);
        m_ser->open();
    
        if (!m_ser->isOpen()){
            throw serial::PortNotOpenedException("Failed to open serial port");
        }
    }
    catch(const serial::IOException& e) {
        ROS_ERROR_STREAM("Unable to open port ");
        return false;
    }
    catch(const std::exception& e){
        ROS_WARN("ERROR: fail to open control serial port!");
        std::cerr << e.what() << '\n';
        return false;
    }
    return true;
}


void default_path(serial::Serial* m_ser, geometry_msgs::Twist m_speed, ros::Time m_start_time, std::string m_speed_data){
    // 直行 10s
    while(ros::Time::now() - m_start_time < ros::Duration(10.0)){
        m_speed.linear.x = 0.5;  // 设置线速度
        m_speed.angular.z = 0.0;  // 无角速度
        m_speed_data = "move " + std::to_string(m_speed.linear.x) + ", " + std::to_string(m_speed.angular.z) + "\n";
        m_ser->write(m_speed_data);
        ROS_INFO("Speed data sent to serial: %s", m_speed_data.c_str());
        ros::Duration(1).sleep();
        // r.sleep();
    }
    ROS_INFO("直行结束");

    // 停止运动
    m_speed.linear.x = 0.0;
    m_speed_data = "move " + std::to_string(m_speed.linear.x) + ", " + std::to_string(m_speed.angular.z) + "\n";
    m_ser->write(m_speed_data);
    ROS_INFO("Speed data sent to serial: %s", m_speed_data.c_str());
    ros::Duration(1).sleep();

    // 角速度转弯90度，转弯 2s
    m_start_time = ros::Time::now();
    while (ros::Time::now() - m_start_time < ros::Duration(2.0))
    {
        m_speed.linear.x = 0.0;
        m_speed.angular.z = M_PI / 4.0;
        m_speed_data = "move " + std::to_string(m_speed.linear.x) + ", " + std::to_string(m_speed.angular.z) + "\n";
        ser->write(m_speed_data);
        ROS_INFO("Speed data sent to serial: %s", m_speed_data.c_str());
        // r.sleep();
        ros::Duration(1).sleep();
    }
    ROS_INFO("转弯结束");

    // 停止运动
    m_speed.linear.x = 0.0;
    m_speed.angular.z = 0.0;
    m_speed_data = "move " + std::to_string(m_speed.linear.x) + ", " + std::to_string(m_speed.angular.z) + "\n";
    m_ser->write(m_speed_data);
    ROS_INFO("Speed data sent to serial: %s", m_speed_data.c_str());
    ros::Duration(1).sleep();

    // 直线前进2秒
    m_start_time = ros::Time::now();
    while (ros::Time::now() - m_start_time < ros::Duration(2.0))
    {
        m_speed.linear.x = 0.5;  
        m_speed.angular.z = 0.0;  
        m_speed_data = "move " + std::to_string(m_speed.linear.x) + ", " + std::to_string(m_speed.angular.z) + "\n";
        m_ser->write(m_speed_data);
        ROS_INFO("Speed data sent to serial: %s", m_speed_data.c_str());
        // r.sleep();
        ros::Duration(1).sleep();
    }
    ROS_INFO("直行结束");

    // 停止运动
    m_speed.linear.x = 0.0;
    m_speed.angular.z = 0.0;  
        m_speed_data = "move " + std::to_string(m_speed.linear.x) + ", " + std::to_string(m_speed.angular.z) + "\n";
    m_ser->write(m_speed_data);
    ROS_INFO("Speed data sent to serial: %s", m_speed_data.c_str());
    ros::Duration(1).sleep();

    // 角速度转弯90度，转弯 2s
    m_start_time = ros::Time::now();
    while (ros::Time::now() - m_start_time < ros::Duration(2.0))
    {
        m_speed.linear.x = 0.0;
        m_speed.angular.z = M_PI / 4.0;
        m_speed_data = "move " + std::to_string(m_speed.linear.x) + ", " + std::to_string(m_speed.angular.z) + "\n";
        ser->write(m_speed_data);
        ROS_INFO("Speed data sent to serial: %s", m_speed_data.c_str());
        // r.sleep();
        ros::Duration(1).sleep();
    }
    ROS_INFO("转弯结束");

    // 停止运动
    m_speed.linear.x = 0.0;
    m_speed.angular.z = 0.0;
    m_speed_data = "move " + std::to_string(m_speed.linear.x) + ", " + std::to_string(m_speed.angular.z) + "\n";
    m_ser->write(m_speed_data);
    ROS_INFO("Speed data sent to serial: %s", m_speed_data.c_str());
    ros::Duration(1).sleep();

    // 线速度前进10秒
    m_start_time = ros::Time::now();
    while (ros::Time::now() - m_start_time < ros::Duration(10.0))
    {
        m_speed.linear.x = 0.5;  // 设置线速度
        m_speed.angular.z = 0.0;  // 无角速度
        m_speed_data = "move " + std::to_string(m_speed.linear.x) + ", " + std::to_string(m_speed.angular.z) + "\n";
        m_ser->write(m_speed_data);
        ROS_INFO("Speed data sent to serial: %s", m_speed_data.c_str());
        // r.sleep();
        ros::Duration(1).sleep();
    }
    ROS_INFO("直行结束");

    // 停止运动
    m_speed.linear.x = 0.0;
    m_speed.angular.z = 0.0;
    m_speed_data = "move " + std::to_string(m_speed.linear.x) + ", " + std::to_string(m_speed.angular.z) + "\n";
    m_ser->write(m_speed_data);
    ROS_INFO("Speed data sent to serial: %s", m_speed_data.c_str());
    ros::Duration(1).sleep();
    ROS_INFO("一次循环完成！");

}
