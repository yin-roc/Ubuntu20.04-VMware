#include "ros/ros.h"
#include "plumbing_pub_sub/Person.h"


void doPerson(const plumbing_pub_sub::PersonConstPtr &person_p)
{
    ROS_INFO("订阅人的信息：%s, %d, %.2f", person_p->name.c_str(), person_p->age, person_p->height);
}

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "");
    ros::init(argc, argv, "listener_person");
    ros::NodeHandle nh;
    ros::Subscriber sub = nh.subscribe<plumbing_pub_sub::Person>("chatter_person", 10, doPerson);

    ros::spin();
    return 0;
}