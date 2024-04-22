#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->resize(800, 600);

    // 处理用户界面返回信号
    connect(&user_interface, &User::back_menu_signal, this, &MainWindow::deal_user_interface_back_signal);

    // 处理管理员界面返回信号
    connect(&administrator, &Admin::back_menu_signal, this, &MainWindow::deal_admin_back_signal);

}

MainWindow::~MainWindow()
{
    delete ui;
}

// 登陆界面帐号密码设置
void MainWindow::on_log_in_pushButton_clicked()
{
    if(ui->Account_lineEdit->text() == "user"){
        user_interface.show();
        this->hide();
        ui->Account_lineEdit->clear();
        ui->password_lineEdit->clear();
    }
    else if(ui->Account_lineEdit->text() == "admin" && ui->password_lineEdit->text() == "123"){
        administrator.show();
        this->hide();
        ui->Account_lineEdit->clear();
        ui->password_lineEdit->clear();
    }
    else
        QMessageBox::warning(this, "错误提示", "账户或密码错误！请重新输入！");
}

// 处理用户界面返回信号函数
void MainWindow::deal_user_interface_back_signal(){
    this->show();
    user_interface.hide();
}


// 处理管理员界面返回信号函数
void MainWindow::deal_admin_back_signal(){
    this->show();
    administrator.hide();
}

