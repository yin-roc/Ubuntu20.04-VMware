#include "ros/ros.h"
#include "sensor_msgs/Imu.h"
#include "tf/tf.h"
#include "geometry_msgs/Twist.h"

ros::Publisher vel_pub;

void IMUCallback(sensor_msgs::Imu msg)
{
    if(msg.orientation_covariance[0] < 0) // 协方差矩阵的第一个值如果为 -1，则代表数据不存在，不需要去读取
        return ;
    tf::Quaternion quaternion( // 将消息包里面的四元素转换成 tf 的四元数对象
        msg.orientation.x,
        msg.orientation.y,
        msg.orientation.z,
        msg.orientation.w
    );

    double roll, pitch, yaw;
    tf::Matrix3x3(quaternion).getRPY(roll, pitch, yaw); // roll：滚转，pitch：俯仰，yaw：朝向
    roll = roll * 180 / M_PI;
    pitch = pitch * 180 / M_PI;
    yaw = yaw * 180 / M_PI;
    ROS_INFO("滚转 = %.0f    俯仰 = %.0f    朝向 = %.0f", roll, pitch, yaw);

    double target_yaw = 90;
    double diff_angle = target_yaw - yaw;
    geometry_msgs::Twist vel_cmd;
    vel_cmd.angular.z = diff_angle * 0.01;
    vel_cmd.linear.x = 0.1;
    vel_pub.publish(vel_cmd);
}

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "");
    ros::init(argc, argv, "imu_node");

    ros::NodeHandle nh;
    ros::Subscriber imu_sub = nh.subscribe("/imu/data", 10, IMUCallback);
    vel_pub = nh.advertise<geometry_msgs::Twist>("/cmd_vel", 10);

    ros::spin();
    return 0;
}
