#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "user.h"
#include "admin.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void deal_user_interface_back_signal();
    void deal_admin_back_signal();

private slots:
    void on_log_in_pushButton_clicked();


private:
    Ui::MainWindow *ui;
    // 用户界面
    User user_interface;

    // 管理员界面
    Admin administrator;
};

#endif // MAINWINDOW_H
