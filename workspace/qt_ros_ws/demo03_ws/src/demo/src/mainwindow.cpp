#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // 处理用户界面返回信号
    connect(&user_interface, &User::back_menu_signal, this, &MainWindow::deal_user_interface_back_signal);
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
    }
    else if(ui->Account_lineEdit->text() == "admin" && ui->password_lineEdit->text() == "123456"){
        administrator.show();
        this->hide();
    }
    else
        QMessageBox::warning(this, "错误提示", "账户或密码错误！请重新输入！");
}

// 处理用户界面返回信号函数
void MainWindow::deal_user_interface_back_signal(){
    this->show();
    user_interface.hide();
}

