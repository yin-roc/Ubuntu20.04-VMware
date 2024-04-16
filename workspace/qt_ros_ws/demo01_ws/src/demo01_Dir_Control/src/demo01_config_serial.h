#ifndef DEMO01_CONFIG_SERIAL_H
#define DEMO01_CONFIG_SERIAL_H

#include <QWidget>
#include <QPushButton>
#include <QTimer>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QtCore/QStringList>


namespace Ui {
class demo01_Config_Serial;
}

class demo01_Config_Serial : public QWidget
{
    Q_OBJECT

public:
    explicit demo01_Config_Serial(QWidget *parent = nullptr);
    ~demo01_Config_Serial();

signals:
    void back_to_main_Signal();

private slots:
    void Send_back_to_main_slots();
    void TimerEvent_1();
    void on_pushButton_open_serial_clicked();
    void handleSerialError(QSerialPort::SerialPortError error);
    void on_checkBox_clicked();
    void on_checkBox_2_clicked();
    void on_checkBox_3_clicked();
    void on_pushButton_send_clicked();
    void on_pushButton_clear_send_clicked();
    void on_pushButton_clear_receive_clicked();
    void serialPort_readyRead();
    void on_pushButton_reset_send_num_clicked();
    void on_pushButton_reset_receive_num_clicked();

private:
    Ui::demo01_Config_Serial *ui;
    QTimer* timer;
    QStringList portStringList; // 设备已接串口
    QSerialPort * serial;
    QString Sendtext; // 发送的字符串
    long Send_Byte; // 发送内容的长度
    QString Receivetext; // 接收的字符串
    long Receive_Byte; // 接收内容的长度
};

#endif // DEMO01_CONFIG_SERIAL_H
