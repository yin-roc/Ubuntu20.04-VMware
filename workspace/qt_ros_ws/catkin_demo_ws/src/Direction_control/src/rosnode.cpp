#include "rosnode.h"
#include "std_msgs/String.h"
#include "sstream"

ROSNode::ROSNode(int argc, char ** argv) {

    ros::init(argc, argv, "test_node");

    ros::NodeHandle nh;
    ros::Publisher pub = nh.advertise<std_msgs::String>("/listener", 10);

    ros::Rate r(1);
    int count = 0;
    std_msgs::String msg;
    // while(ros::ok())
    // {
        std::stringstream ss;

        ss << "Hello world------> " << count;
        msg.data = ss.str();

        pub.publish(msg);
        ROS_INFO("发布的数据：%d\n", count);

        count++;
        r.sleep();
        ros::spinOnce();
    // }
}
