#!/bin/bash
echo "start"
echo "root ok"
sleep 1
echo "ready"
gnome-terminal -- bash -c "cd /home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/vegetable_ws;source devel/setup.bash;rosrun vegetable test_pub_twist "

sleep 2
echo "qt"

gnome-terminal -- bash -c "cd /home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/qt_ros_ws/demo03_ws/devel/lib/demo;./demo_node"
