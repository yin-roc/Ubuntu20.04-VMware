#include "ros/ros.h"
#include "plumbing_pub_sub_msg/Person.h"

int main(int argc, char *argv[])
{
    ros::init(argc, argv, "demo01_pub");
    ros::NodeHandle nh;
    ros::Publisher pub = nh.advertise<plumbing_pub_sub_msg::Person>("/talker", 10);
    
    ros::Rate rate(1);

    plumbing_pub_sub_msg::Person p1;
    p1.name = "yinpeng";
    p1.age = 25;
    
    while (ros::ok())
    {
        pub.publish(p1);
        rate.sleep();
        ros::spinOnce();
    }
    


    return 0;
}
