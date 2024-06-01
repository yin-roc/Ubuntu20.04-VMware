#ifndef QNODE1_H
#define QNODE1_H

#include "ros/ros.h"
#include "geometry_msgs/Twist.h"

extern double globalSpeed;

class qnode1
{
private:
    ros::Subscriber vel_sub;

    void SpeedCallBack(const geometry_msgs::Twist::ConstPtr& vel);

// signals:
//     void speedReceived(double speed);

public:
    qnode1(int argc, char** argv);
};

#endif // QNODE1_H
