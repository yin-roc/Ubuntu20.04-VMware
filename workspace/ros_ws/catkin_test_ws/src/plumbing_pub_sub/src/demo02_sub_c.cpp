#include "ros/ros.h"
#include "std_msgs/String.h"
/*
订阅方实现：

1. 包含头文件
2. 初始化 ROS 节点
3. 创建节点句柄
4. 创建订阅者对象
5. 处理订阅到的数据（回调函数）
6. spin()
*/

void doMsg(const std_msgs::StringConstPtr & msg)
{
    ROS_INFO("翠花订阅到的数据：%s", msg->data.c_str());
}

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "");
// 2. 初始化 ROS 节点
    ros::init(argc, argv, "CuiHua");
// 3. 创建节点句柄
    ros::NodeHandle nh;
// 4. 创建订阅者对象
    ros::Subscriber sub = nh.subscribe("/listener", 10, doMsg);
// 5. 处理订阅到的数据（回调函数）
// 6. spin()
    ros::spin();
    return 0;
}
