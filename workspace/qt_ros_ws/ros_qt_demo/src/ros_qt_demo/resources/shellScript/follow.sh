gnome-terminal -- zsh -c "cd ~/果园qt显示工作空间/guoyuan_ws ./devel/setup.zsh;roslaunch f1tenth_simulator simulator.launch" 
sleep 3s
gnome-terminal -- zsh -c "cd ~/果园qt显示工作空间/guoyuan_ws;source ./devel/setup.zsh;rosrun tianracer_navigation Pure_Pursuit"
