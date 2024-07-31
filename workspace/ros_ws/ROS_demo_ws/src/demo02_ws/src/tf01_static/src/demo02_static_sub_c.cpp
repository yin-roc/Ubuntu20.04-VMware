#include "ros/ros.h"
#include "tf2_ros/transform_listener.h"
#include "tf2_ros/buffer.h"
#include "geometry_msgs/PointStamped.h"
#include "tf2_geometry_msgs/tf2_geometry_msgs.h"

/*
    订阅方：订阅发生的坐标系相对关系，传入一个坐标点，调用 tf 实现转换

    流程：
        1、包含头文件
        2、编码、初始化、NodeHandle(必须的)
        3、创建订阅对象；------->订阅坐标系相对关系
        4、组织一个坐标点数据
        5、转换算法，需要调用 tf 内置实现
        6、最后输出。
*/

int main(int argc, char *argv[])
{
    // 2、编码、初始化、NodeHandle(必须的)
    setlocale(LC_ALL, "");
    ros::init(argc, argv, "static_sub");
    ros::NodeHandle nh;

    // 3、创建订阅对象；------->订阅坐标系相对关系
    // 3-1、创建一个 buffer 缓存,管理和维护坐标变换信息
    tf2_ros::Buffer buffer;
    
    // 3-2、再创建监听对象（监听对象可以将订阅到的数据存入 buffer）
    // tf2_ros::TransformListener 是一个用于监听坐标变换信息的类。
    // 这个监听器对象允许节点订阅坐标变换信息，以便实时获取两个不同坐标系之间的坐标变换关系
    tf2_ros::TransformListener listener(buffer); 

    // 4、组织一个坐标点数据
    // 创建了一个名为 ps 的消息对象，用于存储三维点数据，并且该点带有时间戳和坐标系信息。
    geometry_msgs::PointStamped ps;

    // 设置 ps 消息的头部（header）的坐标系（frame_id）。
    // 指定了这个三维点所处的坐标系，即 "laser" 坐标系。这表示这个三维点的坐标是相对于 "laser" 坐标系的。
    ps.header.frame_id = "laser"; 

    // 设置 ps 消息的头部的时间戳（stamp）。
    // ros::Time::now() 返回当前的 ROS 时间，因此这里将当前时间作为时间戳，表示这个三维点的时间信息。
    ps.header.stamp = ros::Time::now();

    // 设置 ps 消息中的三维点的坐标
    ps.point.x = 2.0;
    ps.point.y = 3.0;
    ps.point.z = 5.0;
    
    // 5、转换算法，需要调用 tf 内置实现
    ros::Rate rate(10);
    while(ros::ok())
    {
        // 核心代码 --- 将 ps 转换成相对于 base_link 的坐标点
        geometry_msgs::PointStamped ps_out;

        /*
            调用了 buffer 的转换函数 transform
            参数1：被转换的坐标点
            参数2：目标坐标系
            返回值：输出的坐标点

            PS1：调用时必须包含头文件 tf2_geometry_msgs/tf2_geometry_msgs.h
            PS2: 运行时存在的问题：抛出一个异常 base_link 不存在
                原因：订阅数据是一个耗时操作，可能在调用一个 transform 转换函数时，
                    坐标系的相对关系还没有订阅到，因此出现异常
                解决：
                    方案1：在调用转换函数前，执行休眠
                    方案2：进行异常处理 try 函数（建议）
        */
        try
        {
            ps_out = buffer.transform(ps, "base_link");
            
            // 6、最后输出。
            ROS_INFO("转换后的坐标值：(%.2f, %.2f, %.2f)，参考的坐标系：%s",
                        ps_out.point.x,
                        ps_out.point.y,
                        ps_out.point.z,
                        ps_out.header.frame_id.c_str()
                        );
        }
        catch(const std::exception& e)
        {
            // std::cerr << e.what() << '\n';
            ROS_INFO("异常消息：%s", e.what());
        }
        
        rate.sleep();
        ros::spinOnce();
    }

    
    return 0;
}
