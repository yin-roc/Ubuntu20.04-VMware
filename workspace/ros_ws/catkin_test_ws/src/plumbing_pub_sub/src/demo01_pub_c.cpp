#include "ros/ros.h"
#include "std_msgs/String.h"
#include <sstream>

/*
发布方实现：
    1、包含头文件
        ROS 中文本类型 ---> std_msgs/String.h
    2、初始化 ROS 节点
    3、创建节点句柄
    4、创建发布者类型
    5、编写发布逻辑并发布数据
*/

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "");
    ros::init(argc, argv, "erGouzi");

    ros::NodeHandle nh;

    ros::Publisher pub = nh.advertise<std_msgs::String>("fang", 10);

    std_msgs::String msg;
    int count = 0;
    ros::Rate rate(1);

    ros::Duration(3).sleep();

    while (ros::ok())
    {
        count++;
        std::stringstream ss;
        ss << "hello ---> " << count;
        msg.data = ss.str();
        pub.publish(msg);
        ROS_INFO("发布的数据：%s", ss.str().c_str());

        rate.sleep();
        ros::spinOnce();
    }

    return 0;
}