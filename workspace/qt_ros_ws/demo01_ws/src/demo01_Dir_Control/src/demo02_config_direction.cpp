#include "demo02_config_direction.h"
#include "ui_demo02_config_direction.h"

demo02_config_direction::demo02_config_direction(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::demo02_config_direction)
{
    ui->setupUi(this);

    this->setWindowTitle("方向控制");
    this->resize(300, 300);
    this->move(800, 400);

    connect(ui->pushButton_5, &QPushButton::clicked, this, &demo02_config_direction::Send_back_to_main_slots);

}

demo02_config_direction::~demo02_config_direction()
{
    delete ui;
}


// 从当前页面跳转到主页面
void demo02_config_direction::Send_back_to_main_slots(){
    emit back_to_main_Signal();
}

// Qt界面中的按钮点击事件函数
// 前进
void demo02_config_direction::on_pushButton_clicked()
{
    rosController.publishCommand(0.5, 0.0); // 假设向前移动速度为0.5，角速度为0.0
}

// 左转
void demo02_config_direction::on_pushButton_2_clicked()
{
    rosController.publishCommand(0.0, 0.5); // 假设向左移动速度为0.0，角速度为0.5
}

// 右转
void demo02_config_direction::on_pushButton_3_clicked()
{
    rosController.publishCommand(0.0, -0.5); // 假设向右移动速度为0.0，角速度为-0.5
}

// 后退
void demo02_config_direction::on_pushButton_4_clicked()
{
    rosController.publishCommand(-0.5, 0.0); // 假设向后移动速度为-0.5，角速度为0.0
}

