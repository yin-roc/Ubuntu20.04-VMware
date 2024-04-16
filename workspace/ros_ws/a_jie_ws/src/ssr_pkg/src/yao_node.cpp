#include <ros/ros.h>
#include <iostream>
#include <std_msgs/String.h>

int main(int argc, char *argv[])
{
    ros::init(argc, argv, "yao_node");

    std::cout << "过去生于未来！\n";
    
    ros::NodeHandle nh;
    ros::Publisher pub = nh.advertise<std_msgs::String>("gie_gie_dai_wo", 10);
    
    ros::Rate loop_rate(10);

    while(ros::ok())
    {
        std::cout << "我要个刷屏了！\n";
        std_msgs::String msg;
        msg.data = "求上车+++";
        pub.publish(msg);
        loop_rate.sleep();
    }
    return 0;
}
