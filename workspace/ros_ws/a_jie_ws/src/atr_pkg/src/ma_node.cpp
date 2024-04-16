#include <ros/ros.h>
#include <std_msgs/String.h>
#include <iostream>
#include <qq_msgs/Carry.h>

void chao_callback(qq_msgs::Carry msg)
{
    ROS_WARN("%s", msg.grade.c_str());
    ROS_WARN("%ld 星", msg.star);
    ROS_INFO("%s", msg.data.c_str());
}

void yao_callback(std_msgs::String msg_1)
{
    ROS_WARN("%s",msg_1.data.c_str());
}

int main(int argc, char  *argv[])
{
    setlocale(LC_ALL, "");
    // setlocale(LC_ALL, "zh_CN.UTF-8");

    ros::init(argc, argv, "ma_node");

    ros::NodeHandle nh;
    ros::Subscriber sub = nh.subscribe("kuai_shang_che_kai_hei_qun", 10, chao_callback);
    ros::Subscriber sub_2 = nh.subscribe("gie_gie_dai_wo", 10, yao_callback);

    while (ros::ok())
    {
        ros::spinOnce(); // 重新去回调函数瞅一眼，看有没有新的数据包
    }
    

    return 0;
}
