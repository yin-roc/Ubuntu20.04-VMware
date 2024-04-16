#include <ros/ros.h>
#include <std_msgs/String.h>
#include <qq_msgs/Carry.h>

int main(int argc, char *argv[])
{
    ros::init(argc, argv, "chao_node");

    ROS_INFO("我的枪去而不反！\n");
    
    ros::NodeHandle nh;
    // ros::Publisher pub = nh.advertise<std_msgs::String>("kuai_shang_che_kai_hei_qun", 10);
    
    ros::Publisher pub = nh.advertise<qq_msgs::Carry>("kuai_shang_che_kai_hei_qun", 10);

    ros::Rate loop_rate(10);

    while(ros::ok())
    {
        std::cout << "我要个刷屏了！\n";
        // std_msgs::String msg;
        // msg.data = "国服马超，带飞！";
        qq_msgs::Carry msg;
        msg.grade = "王者";
        msg.star = 50;
        msg.data = "国服马超，带飞";
        pub.publish(msg);
        loop_rate.sleep();
    }
    return 0;
}