#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ros_node_1.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    // 接收 demo02_config_direction 申请返回信号
    connect(&dir_screen, &demo02_config_direction::back_to_main_Signal, this, &MainWindow::deal_demo02);

    // 接收 demo01_Config_Serial 申请返回信号
    connect(&ser_screen, &demo01_Config_Serial::back_to_main_Signal, this, &MainWindow::deal_demo01);
}

// demo01_Config_Serial 返回主界面
void MainWindow::deal_demo01(){
    ser_screen.hide();
    this->show();
}

// demo02_config_direction 返回主界面
void MainWindow::deal_demo02(){
    dir_screen.hide();
    this->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ser_screen.show();
    this->hide();
}

void MainWindow::on_pushButton_2_clicked()
{
    dir_screen.show();
    this->hide();
}

