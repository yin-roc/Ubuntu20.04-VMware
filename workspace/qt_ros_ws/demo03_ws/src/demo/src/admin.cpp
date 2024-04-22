#include "admin.h"
#include "ui_admin.h"

Admin::Admin(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Admin)
{
    ui->setupUi(this);
    this->setWindowTitle("管理员界面");
    this->resize(800, 600);

    // 处理用户界面返回信号
    connect(&ser_screen, &Serial::back_to_admin_Signal, this, &Admin::deal_serial_back_signal_slots);
}

Admin::~Admin()
{
    delete ui;
}


void Admin::on_pushButton_clicked()
{
    this->hide();
    ser_screen.show();
}

void Admin::deal_serial_back_signal_slots(){
    this->show();
    ser_screen.hide();
}

