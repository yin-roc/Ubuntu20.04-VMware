#include <ros/ros.h>
#include <QApplication>
#include "basic.h"

int main(int argc, char **argv)
{
    ros::init(argc, argv, "marker_test");
    ros::NodeHandle nh;

    ROS_INFO("Hello world!");

    QApplication a(argc,argv);
    Basic w;
    w.show();
    return a.exec();

}
