#include "../include/ros_qt_demo/carsetwindow.h"
#include <QDebug>
#include <QMessageBox>
#include <QTimer>

CarsetWindow::CarsetWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CarsetWindow)
{
    ui->setupUi(this);

    SerialPortInit();
    QTimer::singleShot(300, this, [=](){
        if(!serial->isOpen())
        {
            this->close();
        }
    });
}

CarsetWindow::~CarsetWindow()
{
    delete ui;
}

// 串口初始化（参数配置）
void CarsetWindow::SerialPortInit()
{
    serial = new QSerialPort;                       //申请内存,并设置父对象
    // 参数配置
    // 波特率选择115200
    serial->setBaudRate(QSerialPort::Baud115200);
    // 校验，校验默认选择无
    serial->setParity(QSerialPort::NoParity);
    // 数据位，数据位默认选择8位
    serial->setDataBits(QSerialPort::Data8);
    // 停止位，停止位默认选择1位
    serial->setStopBits(QSerialPort::OneStop);
    // 控制流，默认选择无
    serial->setFlowControl(QSerialPort::NoFlowControl);
    //当前选择的串口名字
    serial->setPortName("/dev/ttyTHS1");
    //用ReadWrite 的模式尝试打开串口，无法收发数据时，发出警告
    if(!serial->open(QIODevice::ReadWrite))
    {
        QMessageBox::warning(this,tr("提示"),tr("串口打开失败!"),QMessageBox::Ok);
        this->close();
    }

    // 信号
    connect(serial,&QSerialPort::readyRead,this,&CarsetWindow::DataReceived);         // 接收数据
    //改写后的connect
//    connect(serial,&QSerialPort::readyRead,this,[=]()
//    {
//       timer->start(100);//设置100毫秒的延时
//       buffer.append(serial->readAll());//将读到的数据放入缓冲区
//    });
//    connect(timer,&QTimer::timeout,this,&CarsetWindow::DataReceived);//timeout执行真正的读取操作

    connect(ui->readButton,&QPushButton::clicked,this,&CarsetWindow::DataSend);    // 发送数据
    m_timer = new QTimer(this);
    connect(m_timer, SIGNAL(timeout()), this, SLOT(SendDataStr()));

}

// 接收数据,使用read () / readLine () / readAll ()
void CarsetWindow::DataReceived()
{
//    char BUF[2000] = {0};                                       // 存储转换类型后的数据
    QByteArray data = serial->readAll();                      // 读取数据


    if(!data.isEmpty())                                 // 接收到数据
    {
        QString tempstr;  // 返回纯文本
        tempstr += tr(data);                                // 数据是一行一行传送的，要保存所有数据
        serstr += tempstr;
//        ui->DataReceived->clear();                      // 清空之前的数据
//        ui->DataReceived->append(str);                  // 将数据放入控件中
        qDebug() << "str info: " << serstr;

         // 清除之前的数据，防止追加，因为每次获取的数据不一样
        int index = serstr.indexOf("*\n");                // 找到，返回索引值，找不到，返回-1
        if(index != -1 || serstr.indexOf("\r\n\r\n") != -1)
        {
            txrxflag = 0;
            if(serstr.indexOf("#read_flash") != -1)
            {
                ProcessData(serstr);
            }
            else if(serstr.indexOf("#set_car_size") != -1)
            {
                serstr = serstr.split("*")[0];
                QStringList numlist = serstr.split(",");
                if(numlist[1] == "OK")
                {
                    ui->carlength_lineEdit->setText(numlist[2]);
                    ui->carwidth_lineEdit->setText(numlist[3]);
                    datalist[0] = numlist[2];
                    datalist[1] = numlist[3];
                    qDebug()<<"change datalist:"<<datalist;
                }
                else
                {
                    QMessageBox::warning(this,tr("提示"),tr("车辆长宽写入失败!"),QMessageBox::Ok);
                }
            }
            else if(serstr.indexOf("#set_wheel_size") != -1)
            {
                serstr = serstr.split("*")[0];
                QStringList numlist = serstr.split(",");
                if(numlist[1] == "OK")
                {
                    ui->wheeldia_lineEdit->setText(numlist[2]);
                    datalist[2] = numlist[2];
                    qDebug()<<"change datalist:"<<datalist;
                }
                else
                {
                    QMessageBox::warning(this,tr("提示"),tr("车轮轮径写入失败!"),QMessageBox::Ok);
                }
            }
            else if(serstr.indexOf("#set_pid") != -1)
            {
                serstr = serstr.split("*")[0];
                QStringList numlist = serstr.split(",");
                if(numlist[1] == "OK")
                {
                    if(numlist[2] == "DS")
                    {
                        if(numlist[3] == "0")
                        {
                            ui->DS_P_lineEdit->setText(numlist[4]);
                            ui->DS_I_lineEdit->setText(numlist[5]);
                            ui->DS_D_lineEdit->setText(numlist[6]);
                            datalist[3] = numlist[4];
                            datalist[4] = numlist[5];
                            datalist[5] = numlist[6];
                        }
                        else if(numlist[3] == "1")
                        {
                            ui->DS_P_lineEdit_2->setText(numlist[4]);
                            ui->DS_I_lineEdit_2->setText(numlist[5]);
                            ui->DS_D_lineEdit_2->setText(numlist[6]);
                            datalist[6] = numlist[4];
                            datalist[7] = numlist[5];
                            datalist[8] = numlist[6];
                        }
                        else if(numlist[3] == "2")
                        {
                            ui->DS_P_lineEdit_3->setText(numlist[4]);
                            ui->DS_I_lineEdit_3->setText(numlist[5]);
                            ui->DS_D_lineEdit_3->setText(numlist[6]);
                            datalist[9] = numlist[4];
                            datalist[10] = numlist[5];
                            datalist[11] = numlist[6];
                        }
                    }
                    else if(numlist[2] == "SS")
                    {
                        if(numlist[3] == "0")
                        {
                            ui->SS_P_lineEdit->setText(numlist[4]);
                            ui->SS_I_lineEdit->setText(numlist[5]);
                            ui->SS_D_lineEdit->setText(numlist[6]);
                            datalist[12] = numlist[4];
                            datalist[13] = numlist[5];
                            datalist[14] = numlist[6];
                        }
                        else if(numlist[3] == "1")
                        {
                            ui->SS_P_lineEdit_2->setText(numlist[4]);
                            ui->SS_I_lineEdit_2->setText(numlist[5]);
                            ui->SS_D_lineEdit_2->setText(numlist[6]);
                            datalist[15] = numlist[4];
                            datalist[16] = numlist[5];
                            datalist[17] = numlist[6];
                        }
                        else if(numlist[3] == "2")
                        {
                            ui->SS_P_lineEdit_3->setText(numlist[4]);
                            ui->SS_I_lineEdit_3->setText(numlist[5]);
                            ui->SS_D_lineEdit_3->setText(numlist[6]);
                            datalist[18] = numlist[4];
                            datalist[19] = numlist[5];
                            datalist[20] = numlist[6];
                        }
                    }
                    else if(numlist[2] == "SA")
                    {
                        if(numlist[3] == "0")
                        {
                            ui->SA_P_lineEdit->setText(numlist[4]);
                            ui->SA_I_lineEdit->setText(numlist[5]);
                            ui->SA_D_lineEdit->setText(numlist[6]);
                            datalist[21] = numlist[4];
                            datalist[22] = numlist[5];
                            datalist[23] = numlist[6];
                        }
                        else if(numlist[3] == "1")
                        {
                            ui->SA_P_lineEdit_2->setText(numlist[4]);
                            ui->SA_I_lineEdit_2->setText(numlist[5]);
                            ui->SA_D_lineEdit_2->setText(numlist[6]);
                            datalist[24] = numlist[4];
                            datalist[25] = numlist[5];
                            datalist[26] = numlist[6];
                        }
                        else if(numlist[3] == "2")
                        {
                            ui->SA_P_lineEdit_3->setText(numlist[4]);
                            ui->SA_I_lineEdit_3->setText(numlist[5]);
                            ui->SA_D_lineEdit_3->setText(numlist[6]);
                            datalist[27] = numlist[4];
                            datalist[28] = numlist[5];
                            datalist[29] = numlist[6];
                        }
                    }
                    qDebug()<<"change datalist:"<<datalist;
                }
                else
                {
                    QMessageBox::warning(this,tr("提示"),tr("pid写入失败!"),QMessageBox::Ok);
                }
            }
            else if(serstr.indexOf("#set_dead_zone") != -1)
            {
                serstr = serstr.split("*")[0];
                QStringList numlist = serstr.split(",");
                if(numlist[1] == "OK")
                {
                    ui->dead_lineEdit->setText(numlist[2]);
                    datalist[30] = numlist[2];
                    qDebug()<<"change datalist:"<<datalist;
                }
                else
                {
                    QMessageBox::warning(this,tr("提示"),tr("死区阈值写入失败!"),QMessageBox::Ok);
                }
            }
            else if(serstr.indexOf("#set_max_sp") != -1)
            {
                serstr = serstr.split("*")[0];
                QStringList numlist = serstr.split(",");
                if(numlist[1] == "OK")
                {
                    ui->maxspeed_lineEdit->setText(numlist[2]);
                    datalist[31] = numlist[2];
                    qDebug()<<"change datalist:"<<datalist;
                }
                else
                {
                    QMessageBox::warning(this,tr("提示"),tr("最大车速写入失败!"),QMessageBox::Ok);
                }
            }
            else if(serstr.indexOf("#set_ul_th") != -1)
            {
                serstr = serstr.split("*")[0];
                QStringList numlist = serstr.split(",");
                if(numlist[1] == "OK")
                {
                    if(numlist[2] == "0")
                    {
                        ui->ulth1_lineEdit->setText(numlist[3]);
                        datalist[32] = numlist[3];
                    }
                    else if(numlist[2] == "1")
                    {
                        ui->ulth2_lineEdit->setText(numlist[3]);
                        datalist[33] = numlist[3];
                    }
                    else if(numlist[2] == "2")
                    {
                        ui->ulth3_lineEdit->setText(numlist[3]);
                        datalist[34] = numlist[3];
                    }
                    else if(numlist[2] == "3")
                    {
                        ui->ulth4_lineEdit->setText(numlist[3]);
                        datalist[35] = numlist[3];
                    }
                    qDebug()<<"change datalist:"<<datalist;
                }
                else
                {
                    QMessageBox::warning(this,tr("提示"),tr("超声阈值写入失败!"),QMessageBox::Ok);
                }
            }
            else if(serstr.indexOf("#set_la_th") != -1)
            {
                serstr = serstr.split("*")[0];
                QStringList numlist = serstr.split(",");
                if(numlist[1] == "OK")
                {
                    if(numlist[2] == "0")
                    {
                        ui->lath1_lineEdit->setText(numlist[3]);
                        datalist[36] = numlist[3];
                    }
                    else if(numlist[2] == "1")
                    {
                        ui->lath2_lineEdit->setText(numlist[3]);
                        datalist[37] = numlist[3];
                    }
                    else if(numlist[2] == "2")
                    {
                        ui->lath3_lineEdit->setText(numlist[3]);
                        datalist[38] = numlist[3];
                    }
                    else if(numlist[2] == "3")
                    {
                        ui->lath4_lineEdit->setText(numlist[3]);
                        datalist[39] = numlist[3];
                    }
                    qDebug()<<"change datalist:"<<datalist;
                }
                else
                {
                    QMessageBox::warning(this,tr("提示"),tr("激光阈值写入失败!"),QMessageBox::Ok);
                }
            }
            else if(serstr.indexOf("#set_col_th") != -1)
            {
                serstr = serstr.split("*")[0];
                QStringList numlist = serstr.split(",");
                if(numlist[1] == "OK")
                {
                    if(numlist[2] == "0")
                    {
                        ui->colth1_lineEdit->setText(numlist[3]);
                        datalist[40] = numlist[3];
                    }
                    else if(numlist[2] == "1")
                    {
                        ui->colth2_lineEdit->setText(numlist[3]);
                        datalist[41] = numlist[3];
                    }
                    else if(numlist[2] == "2")
                    {
                        ui->colth3_lineEdit->setText(numlist[3]);
                        datalist[42] = numlist[3];
                    }
                    else if(numlist[2] == "3")
                    {
                        ui->colth4_lineEdit->setText(numlist[3]);
                        datalist[43] = numlist[3];
                    }
                    qDebug()<<"change datalist:"<<datalist;
                }
                else
                {
                    QMessageBox::warning(this,tr("提示"),tr("碰撞靴阈值写入失败!"),QMessageBox::Ok);
                }
            }
            else if(serstr.indexOf("Incorrect command parameter") != -1 || serstr.indexOf("Command not recognised") != -1)
            {
                QMessageBox::warning(this,tr("提示"),tr("未知命令，请重试!"),QMessageBox::Ok);
            }
            serstr = "";
            qDebug()<<"now str info:"<<serstr;
        }
    }
}

// 发送数据，write ()
void CarsetWindow::DataSend()
{
    qDebug()<<"read flash send";
    serial->write("read_flash");      // 串口发送数据
}

void CarsetWindow::ProcessData(QString RXstring)
{
    QStringList realstr = RXstring.split("*");
    QStringList sl = realstr[0].split("\n\n");
    datalist.clear();
    int i = 0;
    foreach(QString s, sl)
    {
       if(!s.isEmpty())
       {
           qDebug()  << "第"<< i <<"部分:"<< s << endl;
           switch (i)
           {
           case 1:
           {
               QStringList numlist = s.split(",");
               if(s.indexOf("#car_size") != -1 && numlist.size() == 3)
               {
                   double car_length = numlist[1].toDouble();
                   double car_width = numlist[2].toDouble();
                   if(qAbs(car_length)>1000 || qAbs(car_length)==0)
                   {
                       numlist[1]="Error";
                   }
                   if(qAbs(car_width)>1000 || qAbs(car_width)==0)
                   {
                       numlist[2]="Error";
                   }
                   datalist.append(numlist[1]);
                   datalist.append(numlist[2]);
                   ui->carlength_lineEdit->setText(numlist[1]);
                   ui->carwidth_lineEdit->setText(numlist[2]);
               }
               else
               {
                   ui->carlength_lineEdit->setText("");
                   ui->carwidth_lineEdit->setText("");
                   QMessageBox::warning(this,tr("提示"),tr("车辆长宽获取失败!"),QMessageBox::Ok);
               }
           }
               break;
           case 2:
           {
               QStringList numlist = s.split(",");
               if(s.indexOf("#wheel_dia") != -1 && numlist.size() == 2)
               {
                   double wheel_dia = numlist[1].toDouble();
                   if(qAbs(wheel_dia)>1000 || qAbs(wheel_dia)==0)
                   {
                       numlist[1]="Error";
                   }
                   datalist.append(numlist[1]);
                   ui->wheeldia_lineEdit->setText(numlist[1]);
               }
               else
               {
                   ui->wheeldia_lineEdit->setText("");
                   QMessageBox::warning(this,tr("提示"),tr("车轮轮径获取失败!"),QMessageBox::Ok);
               }
           }
               break;
           case 3:
           {
               QStringList numlist = s.split(",");
               if(s.indexOf("#DS_pid") != -1 && numlist.size() == 10)
               {
                   for(int i=1;i<numlist.size();i++)
                   {
                       double pid = numlist[i].toDouble();
                       if(qAbs(pid)>1000)
                       {
                           numlist[i]="Error";
                       }
                       datalist.append(numlist[i]);
                   }
                   ui->DS_P_lineEdit->setText(numlist[1]);
                   ui->DS_I_lineEdit->setText(numlist[2]);
                   ui->DS_D_lineEdit->setText(numlist[3]);
                   ui->DS_P_lineEdit_2->setText(numlist[4]);
                   ui->DS_I_lineEdit_2->setText(numlist[5]);
                   ui->DS_D_lineEdit_2->setText(numlist[6]);
                   ui->DS_P_lineEdit_3->setText(numlist[7]);
                   ui->DS_I_lineEdit_3->setText(numlist[8]);
                   ui->DS_D_lineEdit_3->setText(numlist[9]);
               }
               else
               {
                   ui->DS_P_lineEdit->setText("");
                   ui->DS_I_lineEdit->setText("");
                   ui->DS_D_lineEdit->setText("");
                   ui->DS_P_lineEdit_2->setText("");
                   ui->DS_I_lineEdit_2->setText("");
                   ui->DS_D_lineEdit_2->setText("");
                   ui->DS_P_lineEdit_3->setText("");
                   ui->DS_I_lineEdit_3->setText("");
                   ui->DS_D_lineEdit_3->setText("");
                   QMessageBox::warning(this,tr("提示"),tr("行走速度PID获取失败!"),QMessageBox::Ok);
               }
           }
               break;
           case 4:
           {
               QStringList numlist = s.split(",");
               if(s.indexOf("#SS_pid") != -1 && numlist.size() == 10)
               {
                   for(int i=1;i<numlist.size();i++)
                   {
                       double pid = numlist[i].toDouble();
                       if(qAbs(pid)>1000)
                       {
                           numlist[i]="Error";
                       }
                       datalist.append(numlist[i]);
                   }
                   ui->SS_P_lineEdit->setText(numlist[1]);
                   ui->SS_I_lineEdit->setText(numlist[2]);
                   ui->SS_D_lineEdit->setText(numlist[3]);
                   ui->SS_P_lineEdit_2->setText(numlist[4]);
                   ui->SS_I_lineEdit_2->setText(numlist[5]);
                   ui->SS_D_lineEdit_2->setText(numlist[6]);
                   ui->SS_P_lineEdit_3->setText(numlist[7]);
                   ui->SS_I_lineEdit_3->setText(numlist[8]);
                   ui->SS_D_lineEdit_3->setText(numlist[9]);
               }
               else
               {
                   ui->SS_P_lineEdit->setText("");
                   ui->SS_I_lineEdit->setText("");
                   ui->SS_D_lineEdit->setText("");
                   ui->SS_P_lineEdit_2->setText("");
                   ui->SS_I_lineEdit_2->setText("");
                   ui->SS_D_lineEdit_2->setText("");
                   ui->SS_P_lineEdit_3->setText("");
                   ui->SS_I_lineEdit_3->setText("");
                   ui->SS_D_lineEdit_3->setText("");
                   QMessageBox::warning(this,tr("提示"),tr("转向速度PID获取失败!"),QMessageBox::Ok);
               }
           }
               break;
           case 5:
           {
               QStringList numlist = s.split(",");
               if(s.indexOf("#SA_pid") != -1 && numlist.size() == 10)
               {
                   for(int i=1;i<numlist.size();i++)
                   {
                       double pid = numlist[i].toDouble();
                       if(qAbs(pid)>1000)
                       {
                           numlist[i]="Error";
                       }
                       datalist.append(numlist[i]);
                   }
                   ui->SA_P_lineEdit->setText(numlist[1]);
                   ui->SA_I_lineEdit->setText(numlist[2]);
                   ui->SA_D_lineEdit->setText(numlist[3]);
                   ui->SA_P_lineEdit_2->setText(numlist[4]);
                   ui->SA_I_lineEdit_2->setText(numlist[5]);
                   ui->SA_D_lineEdit_2->setText(numlist[6]);
                   ui->SA_P_lineEdit_3->setText(numlist[7]);
                   ui->SA_I_lineEdit_3->setText(numlist[8]);
                   ui->SA_D_lineEdit_3->setText(numlist[9]);
               }
               else
               {
                   ui->SA_P_lineEdit->setText("");
                   ui->SA_I_lineEdit->setText("");
                   ui->SA_D_lineEdit->setText("");
                   ui->SA_P_lineEdit_2->setText("");
                   ui->SA_I_lineEdit_2->setText("");
                   ui->SA_D_lineEdit_2->setText("");
                   ui->SA_P_lineEdit_3->setText("");
                   ui->SA_I_lineEdit_3->setText("");
                   ui->SA_D_lineEdit_3->setText("");
                   QMessageBox::warning(this,tr("提示"),tr("转向角度PID获取失败!"),QMessageBox::Ok);
               }
           }
               break;
           case 6:
           {
               QStringList numlist = s.split(",");
               if(s.indexOf("#pid_dead") != -1 && numlist.size() == 2)
               {
                   double pid_dead = numlist[1].toDouble();
                   if(pid_dead > 1000 || pid_dead < 0)
                   {
                       numlist[1]="Error";
                   }
                   datalist.append(numlist[1]);
                   ui->dead_lineEdit->setText(numlist[1]);
               }
               else
               {
                   ui->dead_lineEdit->setText("");
                   QMessageBox::warning(this,tr("提示"),tr("死区阈值获取失败!"),QMessageBox::Ok);
               }
           }
               break;
           case 7:
           {
               QStringList numlist = s.split(",");
               if(s.indexOf("#max_speed") != -1 && numlist.size() == 2)
               {
                   double max_speed = numlist[1].toDouble();
                   if(max_speed > 1000 || max_speed < 0)
                   {
                       numlist[1]="Error";
                   }
                   datalist.append(numlist[1]);
                   ui->maxspeed_lineEdit->setText(numlist[1]);
               }
               else
               {
                   ui->maxspeed_lineEdit->setText("");
                   QMessageBox::warning(this,tr("提示"),tr("最大车速获取失败!"),QMessageBox::Ok);
               }
           }
               break;
           case 8:
           {
               QStringList numlist = s.split(",");
               if(s.indexOf("#ul_th") != -1 && numlist.size() == 5)
               {
                   for(int i=1;i<numlist.size();i++)
                   {
                       double ul_th = numlist[i].toDouble();
                       if(ul_th > 65000 || ul_th < 0)
                       {
                           numlist[i]="Error";
                       }
                       datalist.append(numlist[i]);
                   }
                   ui->ulth1_lineEdit->setText(numlist[1]);
                   ui->ulth2_lineEdit->setText(numlist[2]);
                   ui->ulth3_lineEdit->setText(numlist[3]);
                   ui->ulth4_lineEdit->setText(numlist[4]);
               }
               else
               {
                   ui->ulth1_lineEdit->setText("");
                   ui->ulth2_lineEdit->setText("");
                   ui->ulth3_lineEdit->setText("");
                   ui->ulth4_lineEdit->setText("");
                   QMessageBox::warning(this,tr("提示"),tr("超声阈值获取失败!"),QMessageBox::Ok);
               }
           }
               break;
           case 9:
           {
               QStringList numlist = s.split(",");
               if(s.indexOf("#la_th") != -1 && numlist.size() == 5)
               {
                   for(int i=1;i<numlist.size();i++)
                   {
                       double la_th = numlist[i].toDouble();
                       if(la_th > 65000 || la_th < 0)
                       {
                           numlist[i]="Error";
                       }
                       datalist.append(numlist[i]);
                   }
                   ui->lath1_lineEdit->setText(numlist[1]);
                   ui->lath2_lineEdit->setText(numlist[2]);
                   ui->lath3_lineEdit->setText(numlist[3]);
                   ui->lath4_lineEdit->setText(numlist[4]);
               }
               else
               {
                   ui->lath1_lineEdit->setText("");
                   ui->lath2_lineEdit->setText("");
                   ui->lath3_lineEdit->setText("");
                   ui->lath4_lineEdit->setText("");
                   QMessageBox::warning(this,tr("提示"),tr("激光阈值获取失败!"),QMessageBox::Ok);
               }
           }
               break;
           case 10:
           {
               QStringList numlist = s.split(",");
               if(s.indexOf("#col_th") != -1 && numlist.size() == 5)
               {
                   for(int i=1;i<numlist.size();i++)
                   {
                       double col_th = numlist[i].toDouble();
                       if(col_th > 65000 || col_th < 0)
                       {
                           numlist[i]="Error";
                       }
                       datalist.append(numlist[i]);
                   }
                   ui->colth1_lineEdit->setText(numlist[1]);
                   ui->colth2_lineEdit->setText(numlist[2]);
                   ui->colth3_lineEdit->setText(numlist[3]);
                   ui->colth4_lineEdit->setText(numlist[4]);
               }
               else
               {
                   ui->colth1_lineEdit->setText("");
                   ui->colth2_lineEdit->setText("");
                   ui->colth3_lineEdit->setText("");
                   ui->colth4_lineEdit->setText("");
                   QMessageBox::warning(this,tr("提示"),tr("碰撞靴阈值获取失败!"),QMessageBox::Ok);
               }
           }
               break;
           default:
               break;
           }
           i++;
       }
    }
    qDebug()<<"datalist_size:"<<datalist.size()<<"datalist:"<<datalist;
}

void CarsetWindow::on_saveButton_clicked(bool checked)
{
    TXlist.clear();
    if(datalist.size() == 44)
    {
        for(int i=0;i<25;i++)
        {
            switch (i)
            {
            case 0:
                if(datalist[0] != ui->carlength_lineEdit->text() || datalist[1] != ui->carwidth_lineEdit->text())
                {
                    QString sendstr = "set_car_size "+ ui->carlength_lineEdit->text() + " " + ui->carwidth_lineEdit->text();
                    qDebug()<<"sendstr:"<<sendstr;
                    TXlist.append(sendstr);      // 设置车辆长宽
                }
                break;
            case 1:
                if(datalist[2] != ui->wheeldia_lineEdit->text())
                {
                    QString sendstr = "set_wheel_size "+ ui->wheeldia_lineEdit->text();
                    qDebug()<<"sendstr:"<<sendstr;
                    TXlist.append(sendstr);      // 设置车轮轮径
                }
                break;
            case 2:
                if(datalist[3] != ui->DS_P_lineEdit->text() || datalist[4] != ui->DS_I_lineEdit->text() || datalist[5] != ui->DS_D_lineEdit->text())
                {
                    QString sendstr = "set_pid DS 0 "+ ui->DS_P_lineEdit->text() + " " + ui->DS_I_lineEdit->text() + " " + ui->DS_D_lineEdit->text();
                    qDebug()<<"sendstr:"<<sendstr;
                    TXlist.append(sendstr);      // 设置低速pid DS
                }
                break;
            case 3:
                if(datalist[6] != ui->DS_P_lineEdit_2->text() || datalist[7] != ui->DS_I_lineEdit_2->text() || datalist[8] != ui->DS_D_lineEdit_2->text())
                {
                    QString sendstr = "set_pid DS 1 "+ ui->DS_P_lineEdit_2->text() + " " + ui->DS_I_lineEdit_2->text() + " " + ui->DS_D_lineEdit_2->text();
                    qDebug()<<"sendstr:"<<sendstr;
                    TXlist.append(sendstr);      // 设置中速pid DS
                }
                break;
            case 4:
                if(datalist[9] != ui->DS_P_lineEdit_3->text() || datalist[10] != ui->DS_I_lineEdit_3->text() || datalist[11] != ui->DS_D_lineEdit_3->text())
                {
                    QString sendstr = "set_pid DS 2 "+ ui->DS_P_lineEdit_3->text() + " " + ui->DS_I_lineEdit_3->text() + " " + ui->DS_D_lineEdit_3->text();
                    qDebug()<<"sendstr:"<<sendstr;
                    TXlist.append(sendstr);      // 设置高速pid DS
                }
                break;
            case 5:
                if(datalist[12] != ui->SS_P_lineEdit->text() || datalist[13] != ui->SS_I_lineEdit->text() || datalist[14] != ui->SS_D_lineEdit->text())
                {
                    QString sendstr = "set_pid SS 0 "+ ui->SS_P_lineEdit->text() + " " + ui->SS_I_lineEdit->text() + " " + ui->SS_D_lineEdit->text();
                    qDebug()<<"sendstr:"<<sendstr;
                    TXlist.append(sendstr);      // 设置低速pid SS
                }
                break;
            case 6:
                if(datalist[15] != ui->SS_P_lineEdit_2->text() || datalist[16] != ui->SS_I_lineEdit_2->text() || datalist[17] != ui->SS_D_lineEdit_2->text())
                {
                    QString sendstr = "set_pid SS 1 "+ ui->SS_P_lineEdit_2->text() + " " + ui->SS_I_lineEdit_2->text() + " " + ui->SS_D_lineEdit_2->text();
                    qDebug()<<"sendstr:"<<sendstr;
                    TXlist.append(sendstr);      // 设置中速pid SS
                }
                break;
            case 7:
                if(datalist[18] != ui->SS_P_lineEdit_3->text() || datalist[19] != ui->SS_I_lineEdit_3->text() || datalist[20] != ui->SS_D_lineEdit_3->text())
                {
                    QString sendstr = "set_pid SS 2 "+ ui->SS_P_lineEdit_3->text() + " " + ui->SS_I_lineEdit_3->text() + " " + ui->SS_D_lineEdit_3->text();
                    qDebug()<<"sendstr:"<<sendstr;
                    TXlist.append(sendstr);      // 设置高速pid SS
                }
                break;
            case 8:
                if(datalist[21] != ui->SA_P_lineEdit->text() || datalist[22] != ui->SA_I_lineEdit->text() || datalist[23] != ui->SA_D_lineEdit->text())
                {
                    QString sendstr = "set_pid SA 0 "+ ui->SA_P_lineEdit->text() + " " + ui->SA_I_lineEdit->text() + " " + ui->SA_D_lineEdit->text();
                    qDebug()<<"sendstr:"<<sendstr;
                    TXlist.append(sendstr);      // 设置低速pid SA
                }
                break;
            case 9:
                if(datalist[24] != ui->SA_P_lineEdit_2->text() || datalist[25] != ui->SA_I_lineEdit_2->text() || datalist[26] != ui->SA_D_lineEdit_2->text())
                {
                    QString sendstr = "set_pid SA 1 "+ ui->SA_P_lineEdit_2->text() + " " + ui->SA_I_lineEdit_2->text() + " " + ui->SA_D_lineEdit_2->text();
                    qDebug()<<"sendstr:"<<sendstr;
                    TXlist.append(sendstr);      // 设置中速pid SA
                }
                break;
            case 10:
                if(datalist[27] != ui->SA_P_lineEdit_3->text() || datalist[28] != ui->SA_I_lineEdit_3->text() || datalist[29] != ui->SA_D_lineEdit_3->text())
                {
                    QString sendstr = "set_pid SA 2 "+ ui->SA_P_lineEdit_3->text() + " " + ui->SA_I_lineEdit_3->text() + " " + ui->SA_D_lineEdit_3->text();
                    qDebug()<<"sendstr:"<<sendstr;
                    TXlist.append(sendstr);      // 设置高速pid SA
                }
                break;
            case 11:
                if(datalist[30] != ui->dead_lineEdit->text())
                {
                    QString sendstr = "set_dead_zone "+ ui->dead_lineEdit->text();
                    qDebug()<<"sendstr:"<<sendstr;
                    TXlist.append(sendstr);      // 设置死区阈值
                }
                break;
            case 12:
                if(datalist[31] != ui->maxspeed_lineEdit->text())
                {
                    QString sendstr = "set_max_sp "+ ui->maxspeed_lineEdit->text();
                    qDebug()<<"sendstr:"<<sendstr;
                    TXlist.append(sendstr);      // 设置最大车速
                }
                break;
            case 13:
                if(datalist[32] != ui->ulth1_lineEdit->text())
                {
                    QString sendstr = "set_ul_th 0 "+ ui->ulth1_lineEdit->text();
                    qDebug()<<"sendstr:"<<sendstr;      // 设置超声阈值1
                    TXlist.append(sendstr);
                }
                break;
            case 14:
                if(datalist[33] != ui->ulth2_lineEdit->text())
                {
                    QString sendstr = "set_ul_th 1 "+ ui->ulth2_lineEdit->text();
                    qDebug()<<"sendstr:"<<sendstr;      // 设置超声阈值2
                    TXlist.append(sendstr);
                }
                break;
            case 15:
                if(datalist[34] != ui->ulth3_lineEdit->text())
                {
                    QString sendstr = "set_ul_th 2 "+ ui->ulth3_lineEdit->text();
                    qDebug()<<"sendstr:"<<sendstr;      // 设置超声阈值3
                    TXlist.append(sendstr);
                }
                break;
            case 16:
                if(datalist[35] != ui->ulth4_lineEdit->text())
                {
                    QString sendstr = "set_ul_th 3 "+ ui->ulth4_lineEdit->text();
                    qDebug()<<"sendstr:"<<sendstr;      // 设置超声阈值4
                    TXlist.append(sendstr);
                }
                break;
            case 17:
                if(datalist[36] != ui->lath1_lineEdit->text())
                {
                    QString sendstr = "set_la_th 0 "+ ui->lath1_lineEdit->text();
                    qDebug()<<"sendstr:"<<sendstr;
                    TXlist.append(sendstr);      // 设置激光阈值1
                }
                break;
            case 18:
                if(datalist[37] != ui->lath2_lineEdit->text())
                {
                    QString sendstr = "set_la_th 1 "+ ui->lath2_lineEdit->text();
                    qDebug()<<"sendstr:"<<sendstr;
                    TXlist.append(sendstr);      // 设置激光阈值2
                }
                break;
            case 19:
                if(datalist[38] != ui->lath3_lineEdit->text())
                {
                    QString sendstr = "set_la_th 2 "+ ui->lath3_lineEdit->text();
                    qDebug()<<"sendstr:"<<sendstr;
                    TXlist.append(sendstr);      // 设置激光阈值3
                }
                break;
            case 20:
                if(datalist[39] != ui->lath4_lineEdit->text())
                {
                    QString sendstr = "set_la_th 3 "+ ui->lath4_lineEdit->text();
                    qDebug()<<"sendstr:"<<sendstr;
                    TXlist.append(sendstr);      // 设置激光阈值4
                }
                break;
            case 21:
                if(datalist[40] != ui->colth1_lineEdit->text())
                {
                    QString sendstr = "set_col_th 0 "+ ui->colth1_lineEdit->text();
                    qDebug()<<"sendstr:"<<sendstr;
                    TXlist.append(sendstr);      // 设置碰撞靴阈值1
                }
                break;
            case 22:
                if(datalist[41] != ui->colth2_lineEdit->text())
                {
                    QString sendstr = "set_col_th 1 "+ ui->colth2_lineEdit->text();
                    qDebug()<<"sendstr:"<<sendstr;
                    TXlist.append(sendstr);      // 设置碰撞靴阈值2
                }
                break;
            case 23:
                if(datalist[42] != ui->colth3_lineEdit->text())
                {
                    QString sendstr = "set_col_th 2 "+ ui->colth3_lineEdit->text();
                    qDebug()<<"sendstr:"<<sendstr;
                    TXlist.append(sendstr);      // 设置碰撞靴阈值3
                }
                break;
            case 24:
                if(datalist[43] != ui->colth4_lineEdit->text())
                {
                    QString sendstr = "set_col_th 3 "+ ui->colth4_lineEdit->text();
                    qDebug()<<"sendstr:"<<sendstr;
                    TXlist.append(sendstr);      // 设置碰撞靴阈值4
                }
                break;
            default:
                break;
            }
        }
        m_timer->start(100);
    }
    else if(datalist.size() == 0)
    {
        QMessageBox::warning(this,tr("提示"),tr("请读取数据!"),QMessageBox::Ok);
    }
    else
    {
        QMessageBox::warning(this,tr("提示"),tr("当前读取数据错误，无法写入!"),QMessageBox::Ok);
    }
}

void CarsetWindow::SendDataStr()
{
    if(TXlist.size() > 0)
    {
        ui->centralwidget->setEnabled(false);
        if(txrxflag == 0)
        {
            qDebug()<<"TXlist:"<<TXlist;
            qDebug()<<"I send str:"<<TXlist[0];
            serial->write(TXlist[0].toUtf8().data());
            if(!serial->waitForBytesWritten())   //这一句很关键，决定是否能发送成功
            {
                 qDebug()<<"serial write error";
            }
            TXlist.removeAt(0);
            txrxflag = 1;
        }
        else
        {
            qDebug()<<"I waiting rx";
        }
    }
    else
    {
        ui->centralwidget->setEnabled(true);
        QMessageBox::warning(this,tr("提示"),tr("写入成功!"),QMessageBox::Ok);
        m_timer->stop();
    }
}

void CarsetWindow::closeEvent(QCloseEvent *event)
{
    serial->close();
    emit ExitCar();
}
