#ifndef CARSETWINDOW_H
#define CARSETWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include "ui_carsetwindow.h"
#include "main_window.hpp"

#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QStringList>

namespace Ui {
class CarsetWindow;
}

class CarsetWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit CarsetWindow(QWidget *parent = 0);
    ~CarsetWindow();

    // 串口功能
    void        SerialPortInit();                      // 串口初始化（参数配置）
    void        closeEvent(QCloseEvent *event); // Overloaded function

signals:
    void ExitCar();//新建一个信号槽

public slots:
    // 串口槽函数
    void        DataReceived();                        // 接收数据
    void        ProcessData(QString RXstring);
    void        SendDataStr();
private slots:
    // 串口槽函数
    void        DataSend();                            // 发送数据

    void on_saveButton_clicked(bool checked);

private:
    Ui::CarsetWindow *ui;

    // 串口变量
    QSerialPort     *serial;                            // 定义全局的串口对象（第三步）
    QString serstr;
    QStringList datalist;
    QStringList TXlist;
    int txrxflag;
    QTimer *m_timer;
};

#endif // CARSETWINDOW_H
