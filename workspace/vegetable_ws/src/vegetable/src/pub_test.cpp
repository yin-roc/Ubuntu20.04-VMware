#include "ros/ros.h"
#include "std_msgs/String.h"
#include "sstream"

int main(int argc, char  *argv[])
{
    ros::init(argc, argv, "pub_thread");
    ros::NodeHandle nh;
    ros::Publisher pub_a = nh.advertise<std_msgs::String>("A/message", 100); 
    ros::Publisher pub_b = nh.advertise<std_msgs::String>("B/message", 100); 

    std_msgs::String str_a;
    int count_a = 0;

    std_msgs::String str_b;
    int count_b = 0;

    ros::Rate r(100);

    while (ros::ok())
    {
        count_a++;
        std::stringstream ssa;
        ssa << "this is A ---> " << count_a;
        str_a.data = ssa.str();
        pub_a.publish(str_a);
        ROS_INFO("a：%s", ssa.str().c_str());

        count_b++;
        std::stringstream ssb;
        ssb << "this is B ---> " << count_b;
        str_b.data = ssb.str();
        pub_b.publish(str_b);
        ROS_INFO("b：%s", ssb.str().c_str());


        ros::spinOnce();
        r.sleep();
    }
    

    return 0;
}
