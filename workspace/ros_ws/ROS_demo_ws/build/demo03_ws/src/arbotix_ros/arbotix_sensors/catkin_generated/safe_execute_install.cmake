execute_process(COMMAND "/home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/ros_ws/ROS_demo_ws/build/demo03_ws/src/arbotix_ros/arbotix_sensors/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/ros_ws/ROS_demo_ws/build/demo03_ws/src/arbotix_ros/arbotix_sensors/catkin_generated/python_distutils_install.sh) returned error code ")
endif()
