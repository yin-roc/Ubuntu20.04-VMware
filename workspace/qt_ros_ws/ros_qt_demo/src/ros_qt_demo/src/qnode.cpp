/**
 * @file /src/qnode.cpp
 *
 * @brief Ros communication central!
 *
 * @date February 2011
 **/

/*****************************************************************************
** Includes
*****************************************************************************/

#include <ros/ros.h>
#include <ros/network.h>
#include <string>
#include <std_msgs/String.h>
#include <sstream>
#include "../include/ros_qt_demo/qnode.hpp"
#include <QDebug>

/*****************************************************************************
** Namespaces
*****************************************************************************/

namespace class1_ros_qt_demo {

/*****************************************************************************
** Implementation
*****************************************************************************/


QNode::QNode(int argc, char** argv ) :
    init_argc(argc),
    init_argv(argv)
{
}

QNode::~QNode() {
    if(ros::isStarted()) {
        ros::shutdown(); // explicitly needed since we use ros::start();
        ros::waitForShutdown();
    }
    wait();
}

bool QNode::init() {
    ros::init(init_argc,init_argv,"class1_ros_qt_demo");
    if ( ! ros::master::check() ) {
        return false;
    }
    ros::start(); // explicitly needed since our nodehandle is going out of scope.
    ReadTopicSet();
    SubAndPubTopic();
    start();
    return true;
}

bool QNode::init(const std::string &master_url, const std::string &host_url) {
    std::map<std::string,std::string> remappings;
    remappings["__master"] = master_url;
    remappings["__hostname"] = host_url;
    ros::init(remappings,"class1_ros_qt_demo");
    if ( ! ros::master::check() ) {
        return false;
    }
    ros::start(); // explicitly needed since our nodehandle is going out of scope.
    ReadTopicSet();
    SubAndPubTopic();
    start();
    return true;

}

//读取topic的设置
void QNode::ReadTopicSet()
{
    QSettings topic_setting("Qt-Ros Package", "class1_ros_qt_demo");
    pose_topic = topic_setting.value("topic/topic_pose", "pub_mid_pos").toString();
    mapset_topic = topic_setting.value("topic/topic_mapset", "map_set").toString();
    gps_topic = topic_setting.value("topic/topic_gps", "gps_data").toString();

}

//创建订阅者与发布者
void QNode::SubAndPubTopic() {
    ros::NodeHandle n;
    // Add your ros communications here.
    //位置订阅
    pose_sub = n.subscribe(pose_topic.toStdString(),1000,&QNode::poseCallback, this);
    //发送地图参数话题
    mapset_pub = n.advertise<geometry_msgs::Vector3>(mapset_topic.toStdString(), 1000);



    //gps话题的订阅
    gps_sub = n.subscribe(gps_topic.toStdString(), 1000, &QNode::gpsCallback, this);
    //qDebug() << " sub data" << endl;
    //创建速度话题的订阅者
    //   cmdVel_sub = n.subscribe<nav_msgs::Odometry>(odom_topic.toStdString(), 200,
    //                                                &QNode::speedCallback, this);
    //   battery_sub = n.subscribe(batteryState_topic.toStdString(), 1000,
    //                             &QNode::batteryCallback, this);
    //地图订阅
    //   map_sub = n.subscribe("map", 1000, &QNode::mapCallback, this);
    //导航目标点发送话题
    //   goal_pub = n.advertise<geometry_msgs::PoseStamped>(
    //       naviGoal_topic.toStdString(), 1000);
    //速度控制话题
    //   cmd_pub = n.advertise<geometry_msgs::Twist>("cmd_vel", 1000);
    //激光雷达点云话题订阅
    //   m_laserSub = n.subscribe(laser_topic.toStdString(), 1000,
    //                            &QNode::laserScanCallback, this);
        qDebug() << "topic set"<<endl;
}

void QNode::run() {
    ros::Rate loop_rate(10);
    int count = 0;
    Q_UNUSED(count);
    //qDebug() << "qnode starts up." << endl;
    while ( ros::ok() ) {
        // std_msgs::String msg;
        // std::stringstream ss;
        // ss << "hello world " << count;
        // msg.data = ss.str();
        // chatter_publisher.publish(msg);
        // log(Info,std::string("I sent: ")+msg.data);
        // ros::spinOnce();
        //RqDebug() << "123 "<<endl;
        ros::spinOnce();
        loop_rate.sleep();

        // ++count;
    }
    std::cout << "Ros shutdown, proceeding to close the gui." << std::endl;
    Q_EMIT rosShutdown(); // used to signal the gui for a shutdown (useful to roslaunch)
}

void QNode::poseCallback(const geometry_msgs::Pose2D &msg)
{
    qDebug()<< "poseCallBack" <<endl;
    std_msgs::String msgtemp;
    std::stringstream ss;
    ss << "pose_x: " << msg.x <<"  pose_y:"<<msg.y<<"pose_t"<<msg.theta;
    msgtemp.data = ss.str();
    log(Info,std::string("I get: ")+msgtemp.data);
}

void QNode::gpsCallback(const sensor_msgs::NavSatFix &gpsData)
{
    this->_curPos = gpsData;
    //qDebug() << "received gps data." << endl;
}

/*
 * 发送一个map_set的topic
*/
void QNode::setmap(double length,double width,double lane)
{
    geometry_msgs::Vector3 map;

    map.x = length;
    map.y = width;
    map.z = lane;

    std_msgs::String msgtemp;
    std::stringstream ss;

    ss << "length: " << map.x <<"  width:"<<map.y<<"   lane:"<<map.z;

    msgtemp.data = ss.str();

    log(Info,std::string("I send: ")+msgtemp.data);

    /*
     * ros topic: map_set
     * topic type: geometry_msgs::Vector3
    */
    mapset_pub.publish(map);
}

void QNode::log( const LogLevel &level, const std::string &msg) {
    logging_model.insertRows(logging_model.rowCount(),1);
    std::stringstream logging_model_msg;
    switch ( level ) {
    case(Debug) : {
        ROS_DEBUG_STREAM(msg);
        logging_model_msg << "[DEBUG] [" << ros::Time::now() << "]: " << msg;
        break;
    }
    case(Info) : {
        ROS_INFO_STREAM(msg);
        logging_model_msg << "[INFO] [" << ros::Time::now() << "]: " << msg;
        break;
    }
    case(Warn) : {
        ROS_WARN_STREAM(msg);
        logging_model_msg << "[INFO] [" << ros::Time::now() << "]: " << msg;
        break;
    }
    case(Error) : {
        ROS_ERROR_STREAM(msg);
        logging_model_msg << "[ERROR] [" << ros::Time::now() << "]: " << msg;
        break;
    }
    case(Fatal) : {
        ROS_FATAL_STREAM(msg);
        logging_model_msg << "[FATAL] [" << ros::Time::now() << "]: " << msg;
        break;
    }
    }
    QVariant new_row(QString(logging_model_msg.str().c_str()));
    logging_model.setData(logging_model.index(logging_model.rowCount()-1),new_row);
    Q_EMIT loggingUpdated(); // used to readjust the scrollbar
}


}  // namespace class1_ros_qt_demo
