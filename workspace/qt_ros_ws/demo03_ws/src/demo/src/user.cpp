#include "user.h"
#include "ui_user.h"
#include "QPushButton"
#include <QDoubleSpinBox>
#include <QSlider>
#include <QDebug>
#include <iostream>
/*
由于 horizontalSlider 步进最小为整数1，因此修改 doubleSpinBox 单位为 cm/s;
但是实际使用时，需要对获得的速度（）除以 10
*/

User::User(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::User)
{
    ui->setupUi(this);

    // 设置 speed_horizontalSlider 相关参数
    ui->speed_horizontalSlider->setMinimum(0.0); // 设置最小值
    ui->speed_horizontalSlider->setMaximum(200.0); // 设置最大值
    // ui->speed_horizontalSlider->setSingleStep(0.1); // 设置步进值

    // 设置 doubleSpinBox 相关参数
    ui->doubleSpinBox->setMaximum(200);

    // 信号与槽：返回登陆界面
    connect(ui->back_pushButton, &QPushButton::clicked, this, &User::handle_back_menu_signal_slot);

    // 信号与槽：doubleSpinBox 变化影响 speed_horizontalSlider
    // QDoubleSpinBox::valueChanged() 是重载函数，要指定重载类型
    connect(ui->doubleSpinBox, QOverload<double>::of(&QDoubleSpinBox::valueChanged), ui->speed_horizontalSlider, &QAbstractSlider::setValue);

    // 信号与槽：speed_horizontalSlider 变化影响 doubleSpinBox
    connect(ui->speed_horizontalSlider, &QAbstractSlider::valueChanged, ui->doubleSpinBox, &QDoubleSpinBox::setValue);

    connect(ui->doubleSpinBox, QOverload<double>::of(&QDoubleSpinBox::valueChanged), this, &User::onDoubleSpinBoxValueChanged);


}

User::~User()
{

    delete ui;
}


void User::handle_back_menu_signal_slot(){
    emit back_menu_signal();
}


// 测试用
void User::onDoubleSpinBoxValueChanged(double value) {
    qDebug() << "New value:" << value;
    ui->label_11->setText(QString::number(value));
}




