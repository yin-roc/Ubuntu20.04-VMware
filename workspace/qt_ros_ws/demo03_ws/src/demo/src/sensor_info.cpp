#include "sensor_info.h"
#include "ui_sensor_info.h"
#include <QPushButton>

Sensor_info::Sensor_info(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Sensor_info)
{
    ui->setupUi(this);

    this->setWindowTitle("传感器信息");

    connect(ui->pushButton_back_to_admin, &QPushButton::clicked, this, &Sensor_info::handle_back_to_admin_signal_slot);
}

Sensor_info::~Sensor_info()
{
    delete ui;
}


void Sensor_info::handle_back_to_admin_signal_slot(){
    emit back_to_admin_signal();
}
