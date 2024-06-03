#!/bin/bash
echo "start"
echo "root ok"
sleep 1
echo "ready"
echo 666666 | sudo -S chmod 777 /dev/ttyS0
gnome-terminal -- bash -c "cd /home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/vegetable_ws;source devel/setup.bash;roslaunch vegetable test_autowork.launch"
echo "finish"
