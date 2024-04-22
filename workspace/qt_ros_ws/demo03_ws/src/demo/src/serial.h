#ifndef SERIAL_H
#define SERIAL_H

#include <QWidget>
#include <QTimer>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QString>
#include <QMutex>

namespace Ui {
class Serial;
}

class Serial : public QWidget
{
    Q_OBJECT

public:
    explicit Serial(QWidget *parent = nullptr);
    ~Serial();

signals:
    void back_to_admin_Signal();

private slots:
    void Send_back_to_admin_slots();
    void on_pushButton_open_serial_clicked(); // 打开串口
    void TimerEvent1(); // 刷新已连接串口信息
    // void on_checkBox_clicked();
    void on_checkBox_2_clicked();
    void on_checkBox_3_clicked();
    void on_pushButton_send_clicked(); // 发送 按钮槽函数
    void on_pushButton_clear_send_clicked(); // 清空发送区 按钮槽函数
    void on_pushButton_clear_receive_clicked(); // 清空接收区 按钮槽函数
    void on_pushButton_reset_receive_num_clicked(); // 清空接收区累计字节数 按钮槽函数
    void on_pushButton_reset_send_num_clicked(); // 清空发送区累计字节数 按钮槽函数
    void serialPort_readyRead(); // 串口发送与接受模式切换：ASCII和Hex
    void handleSerialError(QSerialPort::SerialPortError error);


private:
    Ui::Serial *ui;
    QTimer* timer;
    QMutex mutex; // 互斥锁
    QMutex portListMutex;
    QStringList portStringList; // 设备已接串口
    QSerialPort * serial;
    QString Sendtext; // 发送的字符串
    long Send_Byte; // 发送内容的长度
    QString Receivetext; // 接收的字符串
    long Receive_Byte; // 接收内容的长度
};

#endif // SERIAL_H
