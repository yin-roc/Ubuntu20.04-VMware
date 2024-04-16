#include "demo01_config_serial.h"
#include "ui_demo01_config_serial.h"
#include <QMessageBox>

demo01_Config_Serial::demo01_Config_Serial(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::demo01_Config_Serial)
{
    ui->setupUi(this);

    this->setWindowTitle("串口调试窗口");
    this->resize(540, 375);
    this->move(800, 400);

    // 定时器定时刷新设备接口设备
    timer = new QTimer(this);
    timer->start(500);
    connect(timer, &QTimer::timeout, this, &demo01_Config_Serial::TimerEvent_1);

    // 返回主界面
    connect(ui->pushButton_back, &QPushButton::clicked, this, &demo01_Config_Serial::Send_back_to_main_slots);

    // 初始化
    serial = new QSerialPort(this);
    Send_Byte = 0;
    Receive_Byte = 0;

    // 设置默认值
    ui->comboBox_baudrate->setCurrentIndex(5);
    ui->comboBox_databits->setCurrentIndex(3);
    ui->comboBox_parity->setCurrentIndex(2);
    ui->comboBox_stopbits->setCurrentIndex(0);
    ui->checkBox->setCheckState(Qt::Checked);
    ui->label_11->setText("0");
    ui->label_12->setText("0");

    // 接收到串口数据的处理函数
    connect(serial, &QSerialPort::readyRead, this, &demo01_Config_Serial::serialPort_readyRead);

}

void demo01_Config_Serial::TimerEvent_1(){

    QStringList newportStringList;
    newportStringList.clear();

    for(const auto & info : QSerialPortInfo::availablePorts()){
        newportStringList += info.portName();
    }

    if(newportStringList.size() != portStringList.size()){
        portStringList = newportStringList;
        ui->comboBox_portName->clear();
        ui->comboBox_portName->addItems(newportStringList);
    }
}


void demo01_Config_Serial::Send_back_to_main_slots(){
    emit back_to_main_Signal();
}


demo01_Config_Serial::~demo01_Config_Serial()
{
    delete ui;
}


// 打开串口按钮槽函数：设置串口参数
void demo01_Config_Serial::on_pushButton_open_serial_clicked()
{
    if(ui->pushButton_open_serial->text() == QString("打开串口")){

        // 串口名
        serial->setPortName(ui->comboBox_portName->currentText());

        // 波特率
        serial->setBaudRate(ui->comboBox_baudrate->currentText().toInt());

        // 数据位
        switch(ui->comboBox_databits->currentText().toInt()){
        case 5: serial->setDataBits(QSerialPort::Data5);break;
        case 6: serial->setDataBits(QSerialPort::Data6);break;
        case 7: serial->setDataBits(QSerialPort::Data7);break;
        case 8: serial->setDataBits(QSerialPort::Data8);break;
        }

        // 校验位
        switch(ui->comboBox_parity->currentIndex()){
        case 0: serial->setParity(QSerialPort::EvenParity);break;
        case 1: serial->setParity(QSerialPort::OddParity);break;
        case 2: serial->setParity(QSerialPort::NoParity);break;
        }

        // 停止位
        switch(ui->comboBox_stopbits->currentIndex()){
        case 0: serial->setStopBits(QSerialPort::OneStop);break;
        case 1: serial->setStopBits(QSerialPort::OneAndHalfStop);break;
        case 2: serial->setStopBits(QSerialPort::TwoStop);break;
        }

        // 流控
        serial->setFlowControl(QSerialPort::NoFlowControl);

        // 无法打开串口
        if(!serial->open(QIODevice::ReadWrite)){
            // QMessageBox::information(this, "错误提示", "无法打开串口",QMessageBox::Ok);
            connect(serial, &QSerialPort::errorOccurred, this, &demo01_Config_Serial::handleSerialError);
        }

        // 一旦打开串口，禁止修改相应参数
        ui->comboBox_portName->setEnabled(false);
        ui->comboBox_baudrate->setEnabled(false);
        ui->comboBox_databits->setEnabled(false);
        ui->comboBox_parity->setEnabled(false);
        ui->comboBox_stopbits->setEnabled(false);


        ui->pushButton_open_serial->setText("关闭串口");
    }
    else {
        // 关闭串口
        serial->close();

        //
        ui->comboBox_portName->setEnabled(true);
        ui->comboBox_baudrate->setEnabled(true);
        ui->comboBox_databits->setEnabled(true);
        ui->comboBox_parity->setEnabled(true);
        ui->comboBox_stopbits->setEnabled(true);

        ui->pushButton_open_serial->setText("打开串口");
    }
}


// 串口打开失败弹窗内容
void demo01_Config_Serial::handleSerialError(QSerialPort::SerialPortError error) {
    if (error != QSerialPort::NoError) {
        QMessageBox::information(this, "错误提示", "无法打开串口", QMessageBox::Ok);
    }
}

// 以下三种：设置三个选择框同时只能选择一个
void demo01_Config_Serial::on_checkBox_clicked()
{
    ui->checkBox->setCheckState(Qt::Checked);
    ui->checkBox_2->setCheckState(Qt::Unchecked);
    ui->checkBox_3->setCheckState(Qt::Unchecked);
}


void demo01_Config_Serial::on_checkBox_2_clicked()
{
    ui->checkBox_2->setCheckState(Qt::Checked);
    ui->checkBox->setCheckState(Qt::Unchecked);
    ui->checkBox_3->setCheckState(Qt::Unchecked);
}


void demo01_Config_Serial::on_checkBox_3_clicked()
{
    ui->checkBox_3->setCheckState(Qt::Checked);
    ui->checkBox_2->setCheckState(Qt::Unchecked);
    ui->checkBox->setCheckState(Qt::Unchecked);
}


//
void demo01_Config_Serial::on_pushButton_send_clicked()
{
    QByteArray bytearray;
    Sendtext = ui->textEdit_Send->toPlainText();
    bytearray = Sendtext.toUtf8();
    serial->write(bytearray);
    Send_Byte += Sendtext.length();
    ui->label_12->setText(QString::number(Send_Byte));
}


// 清空接收区内容
void demo01_Config_Serial::on_pushButton_clear_send_clicked()
{
    ui->textEdit_Send->clear();
}


// 清空发送区内容
void demo01_Config_Serial::on_pushButton_clear_receive_clicked()
{
    ui->textEdit_Receive->clear();
}


// 接收区接收数据显示：hex和ASCII
void demo01_Config_Serial::serialPort_readyRead(){
    QString last_text;
    int length;
    int i;
    if(ui->checkBox_3->checkState() != Qt::Checked){
        last_text = ui->textEdit_Receive->toPlainText();
        Receivetext = serial->readAll();
        Receive_Byte += Receivetext.length();
        ui->label_11->setText(QString::number(Receive_Byte));
    }

    // hex
    if(ui->checkBox_2->checkState() == Qt::Checked){
        Receivetext = Receivetext.toLatin1().toHex();
        length = Receivetext.length();
        for(i = 0; i <= length/2; i++){
            Receivetext.insert(2+3*i, ' ');
        }
    }
    // ASCII
    else{
        Receivetext = Receivetext.toLatin1();
    }
    last_text = last_text.append(Receivetext);
    ui->textEdit_Receive->setText(last_text);
}


// 重置接收数据计数
void demo01_Config_Serial::on_pushButton_reset_receive_num_clicked()
{
    Receive_Byte = 0;
    ui->label_11->setText("0");
}


// 重置发送数据计数
void demo01_Config_Serial::on_pushButton_reset_send_num_clicked()
{
    Send_Byte = 0;
    ui->label_12->setText("0");
}

