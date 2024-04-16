#ifndef LOGINWIDGET_H
#define LOGINWIDGET_H

#include <QWidget>
#include "ui_loginwidget.h"
#include "main_window.hpp"
#include "carsetwindow.h"
#include "pointcloud.hpp"

namespace Ui {
class LoginWidget;
}

class LoginWidget : public QWidget
{
    Q_OBJECT

public:
    explicit LoginWidget(QWidget *parent = 0);
    ~LoginWidget();
    void LoginReadSettings(); // Load up qt program settings at startup
    void LoginWriteSettings(); // Save qt program settings when closing
    void closeEvent(QCloseEvent *event); // Overloaded function

private slots:
    //车辆参数设置按钮槽函数
    void on_carset_Button_clicked(bool checked);

private slots:
    //登录参数设置按钮槽函数
    void on_login_Button_clicked(bool checked);

    //gps参数设置槽函数
    void on_gpsset_Button_clicked(bool checked);

private:
    Ui::LoginWidget *ui;
    //class1_ros_qt_demo::MainWindow* mainWindow = NULL;
};

#endif // LOGINWIDGET_H
