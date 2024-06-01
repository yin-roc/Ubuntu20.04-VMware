#include "admin.h"
#include "ui_admin.h"

Admin::Admin(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Admin)
{
    ui->setupUi(this);
    this->setWindowTitle("管理员界面");
    this->resize(800, 600);

    // 信号与槽：返回登陆界面
    connect(ui->pushButton_back_menu, &QPushButton::clicked, this, &Admin::handle_back_to_menu_signal_slot);

    // 处理串口调试界面返回信号
    connect(&ser_screen, &Serial::back_to_admin_Signal, this, &Admin::deal_serial_back_signal_slot);

    // 处理底盘信息界面返回信号
    connect(&base_screen, &Base_info::back_to_admin_signal, this, &Admin::deal_base_info_back_signal_slot);

    // 处理地图信息界面返回信号
    connect(&map_screen, &Map::back_to_admin_signal, this, &Admin::deal_map_back_signal_slot);

    // 处理传感器信息界面返回信号
    connect(&sensor_screen, &Sensor_info::back_to_admin_signal, this, &Admin::deal_sensor_info_back_signal_slot);

}

Admin::~Admin()
{
    delete ui;
}


// 发送回退到主菜单信号
void Admin::handle_back_to_menu_signal_slot(){
    emit back_menu_signal();
}


// 显示串口调试界面
void Admin::on_pushButton_ser_screen_clicked()
{
    this->hide();
    ser_screen.show();
}
// 由串口调试界面返回本界面（管理员界面）
void Admin::deal_serial_back_signal_slot(){
    this->show();
    ser_screen.hide();
}


// 显示底盘信息界面
void Admin::on_pushButton_base_screen_clicked()
{
    this->hide();
    base_screen.show();
}
// 由底盘信息界面返回本界面（管理员界面）
void Admin::deal_base_info_back_signal_slot(){
    this->show();
    base_screen.hide();
}


// 显示地图调试界面
void Admin::on_pushButton_map_screen_clicked()
{
    this->hide();
    map_screen.show();
}
// 由地图界面返回本界面（管理员界面）
void Admin::deal_map_back_signal_slot(){
    this->show();
    map_screen.hide();
}


// 显示传感器信息界面
void Admin::on_pushButton_sensor_screen_clicked()
{
    this->hide();
    sensor_screen.show();
}
// 由传感器信息界面返回本界面（管理员界面）
void Admin::deal_sensor_info_back_signal_slot(){
    this->show();
    sensor_screen.hide();
}


