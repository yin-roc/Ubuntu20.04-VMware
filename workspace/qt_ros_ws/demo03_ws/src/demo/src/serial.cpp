#include "serial.h"
#include "ui_serial.h"
#include <QMessageBox>

Serial::Serial(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Serial)
{
    ui->setupUi(this);

    this->setWindowTitle("串口调试界面");
    this->resize(800, 600);

    // 定时器定时刷新设备
    timer = new QTimer(this);
    timer->start(500);
    connect(timer, &QTimer::timeout, this, &Serial::TimerEvent1);

    // 返回管理员界面
    connect(ui->pushButton_back, &QPushButton::clicked, this, &Serial::Send_back_to_admin_slots);

    // 初始化
    serial = new QSerialPort(this);
    Send_Byte = 0;
    Receive_Byte = 0;

    // 设置默认值
    ui->comboBox_baudrate->setCurrentIndex(5);
    ui->checkBox->setCheckState(Qt::Checked); // 默认ASCII
    ui->label_11->setText("0"); // 接收字节数
    ui->label_12->setText("0"); // 发送字节数

    // 接收到串口数据的处理函数
    connect(serial, &QSerialPort::readyRead, this, &Serial::serialPort_readyRead);
}

Serial::~Serial()
{
    delete ui;
}


// 发送返回管理员界面信号
void Serial::Send_back_to_admin_slots(){
    emit back_to_admin_Signal();
}


// 打开串口设置
void Serial::on_pushButton_open_serial_clicked()
{
    if(ui->pushButton_open_serial->text() == QString("打开串口")){

        // 串口名
        serial->setPortName(ui->comboBox_portName->currentText());
        // 波特率
        serial->setBaudRate(ui->comboBox_baudrate->currentText().toInt());
        // 数据位
        // QSerialPort::Data5、QSerialPort::Data6、QSerialPort::Data7、QSerialPort::Data8
        serial->setDataBits(QSerialPort::Data8);
        // 校验位
        // 可选 QSerialPort::EvenParity、QSerialPort::OddParity、QSerialPort::NoParity
        serial->setParity(QSerialPort::NoParity);
        // 停止位
        // 可选 QSerialPort::OneStop、QSerialPort::OneAndHalfStop、QSerialPort::TwoStop
        serial->setStopBits(QSerialPort::OneStop);
        // 流控
        serial->setFlowControl(QSerialPort::NoFlowControl);
        // 无法打开串口
        if(!serial->open(QIODevice::ReadWrite)){
            // QMessageBox::information(this, "错误提示", "无法打开串口", QMessageBox::Ok);
            connect(serial, &QSerialPort::errorOccurred, this, &Serial::handleSerialError);
        }

        // 一旦打开串口，禁止修改相应参数
        ui->comboBox_portName->setEnabled(false);
        ui->comboBox_baudrate->setEnabled(false);
        ui->pushButton_open_serial->setText("关闭串口");
    }
    else {
        // 关闭串口及相关设置
        serial->close();
        ui->comboBox_portName->setEnabled(true);
        ui->comboBox_baudrate->setEnabled(true);
        ui->pushButton_open_serial->setText("打开串口");
    }
}


//
void Serial::TimerEvent1(){
    QMutexLocker locker(&mutex); // 锁定互斥锁，确保在多线程环境下安全调用

    QStringList newportStringList;
    newportStringList.clear();

    for(const QSerialPortInfo &info : QSerialPortInfo::availablePorts()){
        newportStringList += info.portName();
    }
    QMutexLocker locker2(&portListMutex); // 锁定 portStringList 的互斥锁
    if(newportStringList.size() != portStringList.size()){
        portStringList = newportStringList;
        ui->comboBox_portName->clear();
        ui->comboBox_portName->addItems(newportStringList);
    }
}


// 以下三种：设置三个复选框同时只能选择一个
// void Serial::on_checkBox_clicked()
// {
//     ui->checkBox->setCheckState(Qt::Checked);
//     ui->checkBox_2->setCheckState(Qt::Unchecked);
//     ui->checkBox_3->setCheckState(Qt::Unchecked);
// }
void Serial::on_checkBox_2_clicked()
{
    ui->checkBox_2->setCheckState(Qt::Checked);
    ui->checkBox->setCheckState(Qt::Unchecked);
    ui->checkBox_3->setCheckState(Qt::Unchecked);
}
void Serial::on_checkBox_3_clicked()
{
    ui->checkBox_3->setCheckState(Qt::Checked);
    ui->checkBox_2->setCheckState(Qt::Unchecked);
    ui->checkBox->setCheckState(Qt::Unchecked);
}


// 发送 按钮槽函数
void Serial::on_pushButton_send_clicked()
{
    QByteArray bytearray;
    Sendtext = ui->textEdit_Send->toPlainText();
    bytearray = Sendtext.toUtf8();
    serial->write(bytearray);
    Send_Byte += Sendtext.length();
    ui->label_12->setText(QString::number(Send_Byte));
}


// 清空发送区 按钮槽函数
void Serial::on_pushButton_clear_send_clicked()
{
    ui->textEdit_Send->clear();
}


// 清空接收区 按钮槽函数
void Serial::on_pushButton_clear_receive_clicked()
{
    ui->textEdit_Receive->clear();
}


// 清空接收区累计字节数 按钮槽函数
void Serial::on_pushButton_reset_receive_num_clicked()
{
    Receive_Byte = 0;
    ui->label_11->setText("0");
}


// 清空发送区累计字节数 按钮槽函数
void Serial::on_pushButton_reset_send_num_clicked()
{
    Send_Byte = 0;
    ui->label_12->setText("0");
}


// 串口发送与接受模式切换：ASCII和Hex
void Serial::serialPort_readyRead(){
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


// 串口打开失败弹窗内容
void Serial::handleSerialError(QSerialPort::SerialPortError error) {
    if (error != QSerialPort::NoError) {
        QMessageBox::information(this, "错误提示", "无法打开串口", QMessageBox::Ok);
    }
}



