#include "qnode1.h"
#include "QDebug"
#include "thread"

double globalSpeed = 0.0;

void qnode1::SpeedCallBack(const geometry_msgs::Twist::ConstPtr& vel){

    globalSpeed = vel->linear.x;
    std::cout << "Receive Speed: " << vel->linear.x << std::endl;
}


qnode1::qnode1(int argc, char** argv){
    std::cout << "Initializing ROS node..." << std::endl;

    ros::init(argc, argv, "vel_qt");
    ros::NodeHandle nh;
    vel_sub = nh.subscribe<geometry_msgs::Twist>("Speed", 1, &qnode1::SpeedCallBack, this);
    std::cout << "Subscriber created." << std::endl;


    // 创建一个新的线程来运行 ROS 订阅节点
    std::thread rosThread([this]() {
        std::cout << "Starting ROS spin in a new thread." << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(100));

        ros::spin();
    });

    // 分离线程，让线程自行运行
    rosThread.detach();
}
