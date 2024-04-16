#include "ros/ros.h"
#include "plumbing_pub_sub_msg/Person.h"

int main(int argc, char *argv[])
{
    ros::init(argc, argv, "demo01_pub");
    ros::NodeHandle nh;
    ros::Publisher pub = nh.advertise<plumbing_pub_sub_msg::Person>("/chatter", 10);
    
    ros::Rate rate(1);

    plumbing_pub_sub_msg::Person p1;
    p1.name = "helloworld";
    p1.age = 27;
    
    while (ros::ok())
    {
        pub.publish(p1);
        rate.sleep();
        ros::spinOnce();
    }
    


    return 0;
}
