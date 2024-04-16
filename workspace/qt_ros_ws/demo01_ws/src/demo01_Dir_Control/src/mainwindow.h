#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSerialPort/QSerialPortInfo>
#include <QtSerialPort/QSerialPort>
#include "demo02_config_direction.h"
#include "demo01_config_serial.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void deal_demo01();
    void deal_demo02();


private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();


private:
    Ui::MainWindow *ui;
    demo02_config_direction dir_screen;
    demo01_Config_Serial ser_screen;

};

#endif // MAINWINDOW_H
