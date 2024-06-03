#include <iostream>
#include <thread>
#include <chrono>
#include <string>
#include <mutex>
#include "geometry_msgs/Twist.h"
#include "ros/ros.h"
#include "serial/serial.h"

std::string mode = "waiting"; // 用于指示当前模式
std::mutex mode_mutex; // 保护 mode 的互斥锁
std::string feedback = "waiting";
serial::Serial* ser = nullptr;

void readSerial();
void autoworkTask();
void processFeedback(const std::string &feedback);

int main(int argc, char **argv) {
    // 初始化节点信息
    setlocale(LC_ALL, "");
    ros::init(argc, argv, "serial_node");
    ros::NodeHandle nh;

    // 初始化串口信息
    std::string serial_port = "/dev/ttyS0";  
    int serial_baudrate = 115200;                                        
    int control_rate = 10;

    // 创建串口，并尝试打开串口
    ser = new serial::Serial();
    try {
        ser->setPort(serial_port);
        ser->setBaudrate(serial_baudrate);
        serial::Timeout to = serial::Timeout::simpleTimeout(1000 * 0.5 / control_rate);
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

    // 正确打开，终端提示：serial port is ok.
    ROS_INFO("serial port is ok.");

    // 创建两个线程，一个负责读取串口数据，一个负责autowork任务
    std::thread serialThread(readSerial);
    std::thread autoworkThread(autoworkTask);

    // 主线程继续执行其他任务
    while (ros::ok()) {
        {
            std::lock_guard<std::mutex> lock(mode_mutex);
            if (mode == "telecontrol") {
                std::cout << "Executing telecontrol logic..." << std::endl;
                // 在telecontrol模式下执行相应逻辑
            }
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
        ros::spinOnce();
    }

    // 等待线程完成（通常不会到这里，因为while(true)会无限循环）
    serialThread.join();
    autoworkThread.join();

    return 0;
}

// 函数：模拟读取串口数据
void readSerial() {
    while (true) {
        // 检测串口是否可用
        if (ser->isOpen() && ser->available()) {
            // 读取串口信息
            feedback = ser->readline();
            ROS_INFO("PC received: %s", feedback.c_str());
            std::lock_guard<std::mutex> lock(mode_mutex);
            if (feedback == "autowork") {
                mode = "autowork";
                ROS_INFO("Received autowork command.");
            } else if (feedback == "telecontrol") {
                mode = "telecontrol";
                ROS_INFO("Received telecontrol command.");
            } else {
                ROS_INFO("Unknown feedback received: %s", feedback.c_str());
            }
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(100)); // 添加短暂的休眠以防止CPU占用过高
    }
}

// 函数：在autowork模式下执行的任务
void autoworkTask() {
    while (true) {
        {
            std::lock_guard<std::mutex> lock(mode_mutex);
            if (mode == "autowork") {
                ROS_INFO("linear.x = 0.1");
                std::this_thread::sleep_for(std::chrono::milliseconds(1000)); // 以1秒间隔执行任务或检查模式
                ROS_INFO("linear.y = 0.2");
                std::this_thread::sleep_for(std::chrono::milliseconds(1000)); // 以1秒间隔执行任务或检查模式
                ROS_INFO("linear.z = 0.3");
                std::this_thread::sleep_for(std::chrono::milliseconds(1000)); // 以1秒间隔执行任务或检查模式
                ROS_INFO("angular.x = 0.4");
                std::this_thread::sleep_for(std::chrono::milliseconds(1000)); // 以1秒间隔执行任务或检查模式
                ROS_INFO("angular.y = 0.5");
                std::this_thread::sleep_for(std::chrono::milliseconds(1000)); // 以1秒间隔执行任务或检查模式
                ROS_INFO("angular.z = 0.6");
            } else {
                ROS_INFO("Autowork task paused.");
            }
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(1000)); // 以1秒间隔执行任务或检查模式
    }
}

void processFeedback(const std::string &feedback) {
    std::lock_guard<std::mutex> lock(mode_mutex);
    if (feedback == "telecontrol") {
        // 接收到 "telecontrol" 信息时，切换到 telecontrol 状态
        ROS_INFO("Received telecontrol command.");
        mode = "telecontrol";
    } else if (feedback == "autowork") {
        // 接收到 "autowork" 信息时，切换到 autowork 状态
        ROS_INFO("Received autowork command.");
        mode = "autowork";
    } else {
        ROS_INFO("Unknown feedback received: %s", feedback.c_str());
    }
}
