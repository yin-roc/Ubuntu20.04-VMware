#include "ros/ros.h"
#include "geometry_msgs/Twist.h"

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "");
    ros::init(argc, argv, "test_node");

    ros::NodeHandle nh;

    ros::Publisher pub_twist = nh.advertise<geometry_msgs::Twist>("Speed", 1);

    ros::Rate r(1);

    ros::Duration(3).sleep();

    geometry_msgs::Twist speed;
    speed.linear.x = 0.0;
    speed.linear.y = 0.0;
    speed.linear.z = 0.0;
    speed.angular.x = 0.0;
    speed.angular.y = 0.0;
    speed.angular.z = 0.0;

    int count = 1;

    ros::Time start_time = ros::Time::now();
    // while (ros::Time::now() - start_time < ros::Duration(10.0))
    // {
    //     speed.linear.x = 0.5;  // 设置线速度
    //     speed.angular.z = 0.0;  // 无角速度
    //     pub_twist.publish(speed);
    //     r.sleep();
    // }

    // // 停止运动
    // speed.linear.x = 0.0;
    // pub_twist.publish(speed);
    // ros::Duration(1).sleep();

    // // 角速度转弯90度
    // start_time = ros::Time::now();
    // while (ros::Time::now() - start_time < ros::Duration(2.0))
    // {
    //     speed.linear.x = 0.0;  // 停止线速度
    //     speed.angular.z = M_PI / 2.0;  // 设置角速度（90度转弯）
    //     pub_twist.publish(speed);
    //     r.sleep();
    // }

    // // 停止运动
    // speed.angular.z = 0.0;
    // pub_twist.publish(speed);
    // ros::Duration(1).sleep();

    // // 直线前进2秒
    // start_time = ros::Time::now();
    // while (ros::Time::now() - start_time < ros::Duration(2.0))
    // {
    //     speed.linear.x = 0.5;  // 设置线速度
    //     speed.angular.z = 0.0;  // 无角速度
    //     pub_twist.publish(speed);
    //     r.sleep();
    // }

    // // 停止运动
    // speed.linear.x = 0.0;
    // pub_twist.publish(speed);
    // ros::Duration(1).sleep();

    // // 线速度前进10秒
    // start_time = ros::Time::now();
    // while (ros::Time::now() - start_time < ros::Duration(10.0))
    // {
    //     speed.linear.x = 0.5;  // 设置线速度
    //     speed.angular.z = 0.0;  // 无角速度
    //     pub_twist.publish(speed);
    //     r.sleep();
    // }

    // // 停止运动
    // speed.linear.x = 0.0;
    // speed.angular.z = 0.0;
    // pub_twist.publish(speed);



    while (ros::ok())
    {
        start_time = ros::Time::now();

        // 直行
        while (ros::Time::now() - start_time < ros::Duration(10.0))
        {
            speed.linear.x = 0.5;  // 设置线速度
            speed.angular.z = 0.0;  // 无角速度
            pub_twist.publish(speed);
            ROS_INFO("speed.linear.x = %f, speed.angular.z = %f", speed.linear.x, speed.angular.y);
            r.sleep();
        }

        // 暂时停止运动
        speed.linear.x = 0.0;
        pub_twist.publish(speed);
        ROS_INFO("speed.linear.x = %f, speed.angular.z = %f", speed.linear.x, speed.angular.y);
        ros::Duration(1).sleep();

        // 角速度转弯90度
        start_time = ros::Time::now();
        while (ros::Time::now() - start_time < ros::Duration(2.0))
        {
            speed.linear.x = 0.0;  // 停止线速度
            speed.angular.z = M_PI / 2.0;  // 设置角速度（90度转弯）
            pub_twist.publish(speed);
            ROS_INFO("speed.linear.x = %f, speed.angular.z = %f", speed.linear.x, speed.angular.y);
            r.sleep();
        }

        // 直线前进2秒
        start_time = ros::Time::now();
        while (ros::Time::now() - start_time < ros::Duration(2.0))
        {
            speed.linear.x = 0.5;  // 设置线速度
            speed.angular.z = 0.0;  // 无角速度
            pub_twist.publish(speed);
            ROS_INFO("speed.linear.x = %f, speed.angular.z = %f", speed.linear.x, speed.angular.y);
            r.sleep();
        }

        // 角速度转弯90度
        start_time = ros::Time::now();
        while (ros::Time::now() - start_time < ros::Duration(2.0))
        {
            speed.linear.x = 0.0;  // 停止线速度
            speed.angular.z = M_PI / 2.0;  // 设置角速度（90度转弯）
            pub_twist.publish(speed);
            ROS_INFO("speed.linear.x = %f, speed.angular.z = %f", speed.linear.x, speed.angular.y);
            r.sleep();
        }
        ros::spinOnce();
    }
    
    return 0;
}
