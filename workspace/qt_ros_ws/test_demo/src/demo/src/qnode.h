#ifndef QNODE_H
#define QNODE_H

#include "ros/ros.h"
#include "geometry_msgs/Twist.h"

class qnode{
private:
    ros::Publisher vel_pub;
public:
    qnode() {
        // 初始化ROS节点
        ros::NodeHandle nh;
        // 创建一个发布者，用于发布Twist消息到cmd_vel话题
        vel_pub = nh.advertise<geometry_msgs::Twist>("turtle1/cmd_vel", 10);
    }

    // 发布移动指令
    void publishCommand(double linear, double angular);
};

#endif // QNODE_H
