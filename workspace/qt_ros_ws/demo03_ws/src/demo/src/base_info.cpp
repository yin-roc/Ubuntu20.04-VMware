#include "base_info.h"
#include "ui_base_info.h"
#include <QPushButton>

Base_info::Base_info(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Base_info)
{
    ui->setupUi(this);

    this->setWindowTitle("底盘信息");


    // 返回管理员界面
    connect(ui->pushButton_back_to_admin, &QPushButton::clicked, this, &Base_info::handle_back_to_admin_signal_slot);
}

Base_info::~Base_info()
{
    delete ui;
}


void Base_info::handle_back_to_admin_signal_slot(){
    emit back_to_admin_signal();
}
