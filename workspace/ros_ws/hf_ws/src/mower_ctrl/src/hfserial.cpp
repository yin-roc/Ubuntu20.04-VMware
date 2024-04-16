#include "mower_ctrl/hfserial.h"
#include "sstream"
#include "serial/serial.h"
#include <cmath>

Serialctrl::Serialctrl(){   
    // 私有空间
    ros::NodeHandle nh("~");
    serial_port_ = nh.param<std::string>("serial_port", "/dev/ttyUSB0");  
    serial_baudrate_ = nh.param<int>("serial_baudrate", 115200);                                        
    control_rate_ = nh.param<int>("control_rate", 10);                                        

    tx_command = {
        "#camera,ERROR*\n", 
        "#jeston_check,OK*\n", 
        "set_mode TS\n",
        "set_mode VT\n",
        "alignment_ready\n",
        "alignment_error\n",
        "read_carinfo\n",
        "#work_start,OK*\n",
        "distance_reset\n",
        "#work_stop,OK*\n",
        "#work_warning,OK*\n",
        "#work_continue,OK*\n"
    };

    state = AUTOState::START;

    ser = new serial::Serial();
    // 初始化串口
    try
    {
        // ser = serial::Serial(serial_port_, serial_baudrate_, 0.5 / control_rate_);
        ser->setPort(serial_port_);
        ser->setBaudrate(serial_baudrate_);
        ser->setTimeout(1000 * 0.5 / control_rate_, 0, 0, 0, 0); // 设置读取和写入超时
    }
    catch(const std::exception& e)
    {
        ROS_WARN("ERROR: fail to open control serial port!");
        std::cerr << e.what() << '\n';
    }
    
    // 发送话题
    ros::NodeHandle n;
    RX_num_publisher = n.advertise<std_msgs::Int8>("RX_num", 10);
    RX_info_publisher = n.advertise<mower_ctrl::SensorValue>("RX_info", 10);
    carinfo_publisher = n.advertise<std_msgs::String>("car_info", 10);

    // 接收话题
    TX_num_subscriber = n.subscribe("TX_num", 10, &Serialctrl::TXHandler, this);
    ctrl_subscriber = n.subscribe("ctrl_command", 10, &Serialctrl::CtrlCommandHandler, this);
}


Serialctrl::~Serialctrl(){
    try
    {
        if(ser->isOpen()){
            ser->close();
        }
    }
    catch(...)
    {} 
    delete ser;   
}


//
void Serialctrl::TXHandler(const std_msgs::Int8::ConstPtr & m_tx_num){
    if(tx_num != m_tx_num->data){
        tx_num = m_tx_num->data;
        tx_count = 0;
    }
    if((m_tx_num->data > 0) && (tx_count == 0)){
        ROS_INFO("%s", tx_command[tx_num-1].c_str());
        ser->write(tx_command[tx_num-1]);
        CLTtime = 9;
        tx_count += 1; //?????
    if(tx_count == 3)
        tx_count = 0;
    }
}


void Serialctrl::CtrlCommandHandler(const mower_ctrl::CtrlCommand& ctrl_msg){
    if((ctrl_count_down == 0) && (state == AUTOState::WORK))
    {
        float driving_speed = std::round(ctrl_msg.driving_speed * 100) / 100;
        float steering_angle = std::round(ctrl_msg.steering_angle * 100) / 100;
        std::stringstream ss_ctrl_command_str;
        ss_ctrl_command_str << "move " << std::fixed << std::setprecision(2) << driving_speed << " " << steering_angle << std::endl;
        std::string ctrl_command_str = ss_ctrl_command_str.str();
        ROS_INFO("TX: %s", ctrl_command_str.c_str());
        ser->write(ctrl_command_str);
        CLTtime = 9;
        ctrl_count_down = 1;
    }
}


void Serialctrl::RxCommand(int num){
    ROS_INFO("rx command num:%d", num);
    RX_num.data = num;
    RX_num_publisher.publish(RX_num);
}


void Serialctrl::FreeCLITxCommand(){
    if(CLTtime > 0)
        CLTtime -= 1;
    else{
        std::string free_command = "CLI_free\n";
        ROS_INFO("free_command");
        ser->write(free_command);
        CLTtime = 9;
    }
}


std::string Serialctrl::AUTOState_to_String(AUTOState m_state)
{
    std::string state_str;
    switch(m_state){
        case AUTOState::WAITING:
            state_str = "WAITING";break;
        case AUTOState::ALIGNMENT:
            state_str = "ALIGNMENT";break;
        case AUTOState::WORK:
            state_str = "WORK";break;
        case AUTOState::START:
            state_str = "START";break;
        default:
            state_str = "Unknown";break;
    }
    return state_str;
}







  