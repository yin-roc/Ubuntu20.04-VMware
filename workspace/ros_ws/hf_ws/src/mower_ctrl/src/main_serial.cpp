#include "ros/ros.h"
#include "mower_ctrl/hfserial.h"
#include <iostream>
#include <sstream>
#include <vector>
#include <cmath>

int main(int argc, char *argv[])
{
    // 初始化节点，加上随机前缀，保证不会与同名节点发生冲突
    ros::init(argc, argv, "hf_serial", ros::init_options::AnonymousName);

    Serialctrl ser1;
    int serial_rate = ser1.Return_control_rate_();
    AUTOState cur_state = ser1.Return_current_state();
    std::string state_str = ser1.AUTOState_to_String(cur_state);
    ros::Rate rate(serial_rate);

    while(ros::ok()){
        ROS_INFO("%s", state_str.c_str());
        std::string feedback = ser1.ser->readline();
        if(cur_state == AUTOState::START){
            std::string start_command = "program_started\n";
            ROS_INFO("%s", start_command.c_str());
            ser1.ser->write(start_command);
            ser1.set_CLTime(9);
            if(feedback.length() > 1){
                ROS_INFO("RX: %s", start_command.c_str());
                if(feedback == "#program_started\n"){
                    ser1.set_state(AUTOState::WAITING);
                }
            }
        }
        if(cur_state == AUTOState::WAITING){
            if(feedback.length() > 1){
                ROS_INFO("RX: %s", feedback.c_str());
                if(feedback == "autowork\n"){
                    ser1.RxCommand(1);
                    ser1.set_state(AUTOState::ALIGNMENT);
                }
            }
        }
        else if (ser1.Return_current_state() == AUTOState::ALIGNMENT)
        {
            if(feedback.length() > 1){
                ROS_INFO("RX: %s", feedback.c_str());
                if(feedback == "work_start\n"){
                    ser1.RxCommand(2);
                    ser1.set_state(AUTOState::WORK);
                }
                else if (feedback == "work_stop\n")
                {
                    ser1.RxCommand(3);
                    ser1.set_state(AUTOState::WAITING);
                }
            }
        }
        else if (ser1.Return_current_state() == AUTOState::WORK)
        {
            if(feedback.length() > 1){
                ROS_INFO("RX: %s", feedback.c_str());
                if(feedback == "work_stop\n"){
                    ser1.RxCommand(3);
                    ser1.set_state(AUTOState::WAITING);
                    ser1.set_ctrl_count_down(0);
                }
                else if (feedback == "#set_mode,Ok*\n")
                {
                    ser1.RxCommand(4);
                }
                else if (feedback == "#distance_reset,OK*\n")
                {
                    ser1.RxCommand(5);
                }
                else
                {
                    std::istringstream iss(feedback);
                    std::vector<std::string> tokens;
                    std::string token;
                    while (std::getline(iss, token, '*'))
                    {
                        tokens.push_back(token);
                    }
                    if(!tokens.empty()){
                        std::istringstream iss2(tokens[0]);
                        std::vector<std::string> RX_STR;
                        while (std::getline(iss2, token, ','))
                        {
                            RX_STR.push_back(token);
                        }
                        if(RX_STR[0] == "#move" && RX_STR[1] == "OK" && RX_STR.size() == 6){
                            ser1.set_last_speed(std::round(std::stod(RX_STR[2])*100)/100);
                            ser1.set_last_angle(std::round(std::stod(RX_STR[3])*100)/100);
                            ser1.RX_info.ul_data1 = std::stoi(RX_STR[4]);
                            ser1.RX_info.ul_data2 = std::stoi(RX_STR[5]);
                            ser1.RX_info_publisher.publish(ser1.RX_info);
                            if(ser1.Return_last_speed() == ser1.Return_driving_speed() && ser1.Return_last_angle() == ser1.Return_steering_angle()){
                                ROS_INFO("move feedback ok");
                                ser1.set_ctrl_count_down(0);
                            }
                        }
                        else if (RX_STR[0] == "#read_carinfo" && RX_STR[1] == "OK" && RX_STR.size() == 44)
                        {
                            ser1.set_carinfo(feedback);
                            std_msgs::String msg_carinfo;
                            msg_carinfo.data = ser1.Return_carinfo();
                            ser1.carinfo_publisher.publish(msg_carinfo);
                            ser1.RX_info.col_data1 = stoi(RX_STR[17]);
                            ser1.RX_info.col_data2 = stoi(RX_STR[18]);
                            ser1.RX_info.col_data3 = stoi(RX_STR[19]);
                            ser1.RX_info.col_data4 = stoi(RX_STR[20]);
                            ser1.RX_info.ul_data1 = stoi(RX_STR[13]);
                            ser1.RX_info.ul_data2 = stoi(RX_STR[14]);
                            ser1.RX_info.ul_data3 = stoi(RX_STR[15]);
                            ser1.RX_info.ul_data4 = stoi(RX_STR[16]);
                            ser1.RX_info.distance = stoi(RX_STR[21]);
                            std_msgs::String msg_RX_info;
                            msg_RX_info.data = ser1.Return_carinfo();
                            ser1.RX_info_publisher.publish(msg_RX_info);
                        }
                    }
                }
            }
        }
    ser1.FreeCLITxCommand();
    rate.sleep();
    }

    return 0;
}
