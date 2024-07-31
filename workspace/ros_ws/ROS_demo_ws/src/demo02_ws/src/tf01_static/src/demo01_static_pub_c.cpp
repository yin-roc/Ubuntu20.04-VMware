#include "ros/ros.h"
#include "tf2_ros/static_transform_broadcaster.h"
#include "geometry_msgs/TransformStamped.h"
#include "tf2/LinearMath/Quaternion.h"

/*
    需求：发布两个坐标系的相对关系

    流程：
        1、包含头文件
        2、设置编码、节点初始化、NodeHandle
        3、创建发布对象
        4、组织被发布的消息
        5、发布数据
        6、spin()
*/

int main(int argc, char *argv[])
{
    // 2、设置编码、节点初始化、NodeHandle
    setlocale(LC_ALL, "");
    ros::init(argc, argv, "static_pub");
    ros::NodeHandle nh;

    // 3、创建发布对象
    tf2_ros::StaticTransformBroadcaster pub;
    // tf2_ros::StaticTransformBroadcaster对象，并将其命名为pub。
    // 这个对象的主要作用是允许你发布（broadcast）静态变换（static transform），使其他ROS节点能够了解两个不同坐标系之间的关系

    ros::Rate rate(1);

    while (ros::ok())
    {
        // 4、组织被发布的消息
        geometry_msgs::TransformStamped tfs; 
        // geometry_msgs::TransformStamped 是 ROS 中的一种消息类型，通常用于表示两个坐标系之间的变换关系。
        // 这个消息包含了以下信息：
        // header：通常包含有关消息的元数据，如时间戳和坐标系信息。
        // child_frame_id：子坐标系的名称。
        // transform：描述了从父坐标系到子坐标系的变换的具体信息，包括平移和旋转。

        tfs.header.stamp = ros::Time::now();
        tfs.header.frame_id = "base_link"; //相对坐标系关系中被参考的那一个
        tfs.child_frame_id = "laser";
        tfs.transform.translation.x = 0.2;
        tfs.transform.translation.y = 0.0;
        tfs.transform.translation.z = 0.5;

        // 需要根据欧拉角转换
        tf2::Quaternion qtn; // 创建 四元数 对象
        // 向该对象设置欧拉角，这个对象可以将欧拉角转换成四元数
        qtn.setRPY(0, 0, 0); // 这一行将四元数对象 qtn 的值设置为指定的欧拉角
        // setRPY 方法接受三个参数，分别是滚动（Roll）、俯仰（Pitch）和偏航（Yaw）的欧拉角。
        // 在这个代码中，欧拉角都被设置为0弧度，表示没有旋转。这意味着 tfs 对象的旋转部分被设置为没有旋转的四元数，即单位四元数，以确保它代表了原始坐标系。
        // 欧拉角的单位是弧度。

        tfs.transform.rotation.x = qtn.getX();
        tfs.transform.rotation.y = qtn.getY();
        tfs.transform.rotation.z = qtn.getZ();
        tfs.transform.rotation.w = qtn.getW();
        // 这些行将 qtn 中的四元数的实部和虚部分别分配给 tfs 中的 transform.rotation 的四个成员。
        // 实部 (w)：四元数的实部，通常表示旋转的角度部分。
        // 虚部 (x, y, z)：四元数的虚部，通常表示旋转的轴部分。
        // 这是为了将四元数的值正确设置到ROS消息对象中，以便在ROS中发布或传输坐标变换信息。

        // 5、发布数据
        pub.sendTransform(tfs); // 用于发布坐标变换消息的特定函数
        // 6、spin()  
        ros::spinOnce();
        rate.sleep();
    }
    
    return 0;
}
