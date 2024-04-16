/**
 * @file /include/class1_ros_qt_demo/qnode.hpp
 *
 * @brief Communications central!
 *
 * @date February 2011
 **/
/*****************************************************************************
** Ifdefs
*****************************************************************************/

#ifndef class1_ros_qt_demo_QNODE_HPP_
#define class1_ros_qt_demo_QNODE_HPP_

/*****************************************************************************
** Includes
*****************************************************************************/

// To workaround boost/qt4 problems that won't be bugfixed. Refer to
//    https://bugreports.qt.io/browse/QTBUG-22829
#ifndef Q_MOC_RUN
#include <ros/ros.h>
#endif

#include <geometry_msgs/Pose2D.h>
#include<geometry_msgs/Vector3.h>
#include <sensor_msgs/NavSatFix.h>

#include <string>
#include <QThread>
#include <QSettings>
#include <QStringListModel>


/*****************************************************************************
** Namespaces
*****************************************************************************/

namespace class1_ros_qt_demo {

/*****************************************************************************
** Class
*****************************************************************************/

class QNode : public QThread {
    Q_OBJECT
public:
    QNode(int argc, char** argv );
    virtual ~QNode();
    bool init();
    bool init(const std::string &master_url, const std::string &host_url);

    void setmap(double length,double width,double lane);

    void run();

    /*********************
        ** Logging
        **********************/
    enum LogLevel {
        Debug,
        Info,
        Warn,
        Error,
        Fatal
    };

    QStringListModel* loggingModel() { return &logging_model; }
    void log( const LogLevel &level, const std::string &msg);

public:
    sensor_msgs::NavSatFix currentPosition(){return _curPos;}
private:
    sensor_msgs::NavSatFix _curPos;

Q_SIGNALS:
    void loggingUpdated();
    void rosShutdown();

private:
    int init_argc;
    char** init_argv;

    QString pose_topic;
    ros::Subscriber pose_sub;
    void poseCallback(const geometry_msgs::Pose2D &msg);
    QString mapset_topic;
    ros::Publisher mapset_pub;
private:
    void gpsCallback(const sensor_msgs::NavSatFix& gpsData);

private:
    QString gps_topic;
    QString test_topic;
    ros::Subscriber gps_sub;
    ros::Publisher test_pub;

    // ros::Publisher chatter_publisher;
    QStringListModel logging_model;
    void ReadTopicSet();
    void SubAndPubTopic();
};

}  // namespace class1_ros_qt_demo

#endif /* class1_ros_qt_demo_QNODE_HPP_ */
