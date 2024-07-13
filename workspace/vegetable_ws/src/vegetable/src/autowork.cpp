#include "ros/ros.h"
#include "serial/serial.h"
#include "std_msgs/String.h"
#include "iostream"
#include "string"
#include "geometry_msgs/Twist.h"

serial::Serial *ser = nullptr;

bool serial_init(serial::Serial* m_ser, std::string m_serial_port, int m_serial_baudrate, int m_control_rate);
void default_path(serial::Serial* m_ser, geometry_msgs::Twist m_speed, ros::Time m_start_time, std::string m_speed_data);

int main(int argc, char *argv[])
{
    // 初始化节点信息
    setlocale(LC_ALL, "");
    ros::init(argc, argv, "autowork_node");
    ros::NodeHandle nh;

    std::string output; 
    ros::Time start_time = ros::Time::now();
    geometry_msgs::Twist speed;
    speed.linear.x = 0.0;
    speed.linear.y = 0.0;
    speed.linear.z = 0.0;
    speed.angular.x = 0.0;
    speed.angular.y = 0.0;
    speed.angular.z = 0.0;


    // 设置串口信息
    ser = new serial::Serial();
    std::string serial_port = "/dev/ttyUSB1";  
    int serial_baudrate = 9600;                                        
    int control_rate = 10;

    ros::Rate rate(1);

    // 初始化串口（串口名、波特率、控制频率），打开串口失败则报错
    bool is_serial_ok = serial_init(ser, serial_port, serial_baudrate, control_rate);

    if (ser->isOpen()) {
        ROS_INFO("Serial port is open.");
    } else {
        ROS_ERROR("Serial port is not open.");
        return -1;  // 如果串口没有打开，直接退出程序
    }

    while(ros::ok()){
        try{
            if(ser->isOpen()){
                std::string feedback = ser->readline();
                ROS_INFO("%s", feedback.c_str());
                ROS_INFO("Switched to autowork state.");
                start_time = ros::Time::now();
                std::string speed_data;                         
                default_path(ser, speed, start_time, speed_data);
                ros::Duration(1).sleep();
            } 
        }
        catch (const serial::IOException& e){
            ROS_ERROR("Serial read error: %s", e.what());
        } 
        catch (const std::exception& e){
            ROS_ERROR("Error: %s", e.what());
        }  
        ros::spinOnce();  // 确保处理回调函数
        rate.sleep();
    }
    return 0;

}


/*
serial_init 函数可以接受 4 个参数，进行串口初始化的功能
:param m_ser: 串口对象指针
:param m_serial_port: 串口名
:param m_serial_baudrate: 串口波特率
:param m_control_rate: 控制频率
:return: 返回是否打开串口成功，true：打开串口成功，false：打开串口失败
*/
bool serial_init(serial::Serial* m_ser, std::string m_serial_port, int m_serial_baudrate, int m_control_rate){
    try{
        m_ser->setPort(m_serial_port);
        m_ser->setBaudrate(m_serial_baudrate);
        serial::Timeout to = serial::Timeout::simpleTimeout(1000 * 0.5 / m_control_rate);
        m_ser->setTimeout(to);
        m_ser->open();
        ROS_INFO("serial init!");
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


/*
default_path 函数可以接受 4 个参数，进行绕圈表演的功能
:param m_ser: 串口对象指针
:param m_speed: 速度
:param m_start_time: 开始的时间戳
:param m_speed_data: 向下位机发送的速度指令
:return: 无返回值
*/
void default_path(serial::Serial* m_ser, geometry_msgs::Twist m_speed, ros::Time m_start_time, std::string m_speed_data){
    // 直行 10s
    while(ros::Time::now() - m_start_time < ros::Duration(10.0)){
        m_speed.linear.x = 100.0;  
        m_speed.angular.z = 0.0;  
        // m_speed_data = "move " + std::to_string(m_speed.linear.x) + ", " + std::to_string(m_speed.angular.z) + "\n";
        m_speed_data = "1";
        m_ser->write(m_speed_data);
        ROS_INFO("Speed data sent to serial: %s", m_speed_data.c_str());
        ros::Duration(1).sleep();
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
        // m_speed.angular.z = M_PI / 2.0;
        m_speed.angular.z = 90.0;
        m_speed_data = "move " + std::to_string(m_speed.linear.x) + ", " + std::to_string(m_speed.angular.z) + "\n";
        ser->write(m_speed_data);
        ROS_INFO("Speed data sent to serial: %s", m_speed_data.c_str());
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
        m_speed.linear.x = 100.0;  
        m_speed.angular.z = 0.0;  
        m_speed_data = "move " + std::to_string(m_speed.linear.x) + ", " + std::to_string(m_speed.angular.z) + "\n";
        m_ser->write(m_speed_data);
        ROS_INFO("Speed data sent to serial: %s", m_speed_data.c_str());
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
        m_speed.angular.z = 90.0;
        // m_speed.angular.z = M_PI / 4.0;
        m_speed_data = "move " + std::to_string(m_speed.linear.x) + ", " + std::to_string(m_speed.angular.z) + "\n";
        ser->write(m_speed_data);
        ROS_INFO("Speed data sent to serial: %s", m_speed_data.c_str());
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
        m_speed.linear.x = 100;  // 设置线速度
        m_speed.angular.z = 0.0;  // 无角速度
        m_speed_data = "move " + std::to_string(m_speed.linear.x) + ", " + std::to_string(m_speed.angular.z) + "\n";
        m_ser->write(m_speed_data);
        ROS_INFO("Speed data sent to serial: %s", m_speed_data.c_str());
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

    // 原地自旋转
    m_start_time = ros::Time::now();
    while (ros::Time::now() - m_start_time < ros::Duration(10.0))
    {
        m_speed.linear.x = 0.0;  // 设置线速度
        m_speed.angular.z = 90.0;  // 无角速度
        m_speed_data = "move " + std::to_string(m_speed.linear.x) + ", " + std::to_string(m_speed.angular.z) + "\n";
        m_ser->write(m_speed_data);
        ROS_INFO("Speed data sent to serial: %s", m_speed_data.c_str());
        ros::Duration(1).sleep();
    }
    ROS_INFO("原地自旋转结束");

    ROS_INFO("一次循环完成！");
}
