/**
 * @file /src/main_window.cpp
 *
 * @brief Implementation for the qt gui.
 *
 * @date February 2011
 **/
/*****************************************************************************
** Includes
*****************************************************************************/
#include "../include/ros_qt_demo/main_window.hpp"
#include <QtGui>
#include <QMessageBox>
#include <QHostAddress>
#include <QNetworkInterface>
#include <QPainter>
#include <QPen>
#include <QFile>
#include <QFileDialog>
#include <QIODevice>
#include <QTimer>
#include <QDebug>
#include <QTextStream>
#include <QUrl>
#include <QDir>
#include <QDesktopWidget>
#include <iostream>
#include <QProcess>
#include <QTextStream>

/*****************************************************************************
** Namespaces
*****************************************************************************/

namespace class1_ros_qt_demo {

using namespace Qt;

/*****************************************************************************
** Implementation [MainWindow]
*****************************************************************************/

MainWindow::MainWindow(int argc, char** argv, QWidget *parent)
    : QMainWindow(parent)
    , qnode(argc,argv)
{
    ui.setupUi(this); // Calling this incidentally connects all ui's triggers to on_...() callbacks in this class.
    ReadSettings();
    initWebEngineRelated();
    initLayout();
    initButtons();
    initConnections();
    initNullptr();
    initFileName();
    ui.view_logging->setModel(qnode.loggingModel());
    initTimer();
}

MainWindow::~MainWindow() {
    releaseHeap();
}

/*****************************************************************************
** Implementation [Slots]
*****************************************************************************/

//断开连接的提示窗口
void MainWindow::shutdownMessage() {
    QMessageBox msgBox;
    msgBox.setText("与ROS主机断开链接！");
    msgBox.exec();
    // close();
}

void MainWindow::_finalSlamShCmd(const QString &cmd)
{
    qDebug() << cmd << endl;
    executeLinuxCmd(cmd);
}


//鼠标指示位置显示经纬坐标
void MainWindow::getCoordinates(QString lon, QString lat)
{
    QString tmpLon = "Mouse Lontitude:"+lon+"°";
    QString tmpLat = "Mouse Lattitude:"+lat+"°";
    ui.lat_show->setText(tmpLat);
    ui.lon_show->setText(tmpLon);
}

//获取两个经纬度之间的距离
void MainWindow::getDistance(double dis)
{
    //qDebug() << dis <<endl;
    QDir temDir("../initPoints.txt");
    QString absDir = temDir.absolutePath();
    QString fileName = absDir;  //qDebug()<<fileName;
    QFile file(fileName);
    //    file.open(QIODevice::WriteOnly);//clear
    //    file.close();
    if (file.open(QIODevice::ReadWrite | QIODevice::Text))
    {
        QTextStream stream(&file);
        stream.seek(file.size());
        stream << dis << endl;
        file.close();
    }

}

void MainWindow::receivePoint(QString lon, QString lat)
{
    if((lon.toInt()) == -1 && (lat.toInt()) == -1)
        _clearJsRelated();
    else{
        QVector<double>temp = {0,0};
        temp[0] = lon.toDouble();
        temp[1] = lat.toDouble();
        qDebug() << temp[0] << temp[1] << endl;
        pointSet.append(temp);
    }
    //for(int i = 0; i < pointSet.size(); i++){
    //    qDebug() <<fixed << qSetRealNumberPrecision(4) << pointSet[i][0] << pointSet[i][1] <<endl;
    //}
}

void MainWindow::jsDebug(QString s)
{
    qDebug() << s << endl;
}

/*
 * These triggers whenever the button is clicked, regardless of whether it
 * is already checked or not.
 * 设置连接按钮的
 * ui部件：button_connect(链接）
 */
void MainWindow::on_button_connect_clicked(bool check ) {
    Q_UNUSED(check);
    //未连接的状态
    if(ui.button_connect->text() == "连接")
    {
        //设置连接状态窗口内的各个参数
        WriteSettings();

        //将host和master连接，进行初始化，如果失败则报错
        if ( ! qnode.init(ui.line_edit_master->text().toStdString(),ui.line_edit_host->text().toStdString()) )
        {
            _showWrongInfo("未找到ROS主机！");
        }
        else
        {
            //连接成功，锁定设置
            ui.button_connect->setText("断开");
            ui.line_edit_master->setEnabled(false);
            ui.line_edit_host->setEnabled(false);
            ui.checkbox_use_autoip->setEnabled(false);
            ui.topic_set->setEnabled(false);
            ui.map_set->setEnabled(true);
            ui.route_set->setEnabled(true);

        }
    }
    //连接状态，再次按下表示断开连接
    else
    {
        //ros要关闭
        ros::shutdown();
        ui.button_connect->setText("连接");
        ui.line_edit_master->setEnabled(true);
        ui.line_edit_host->setEnabled(true);
        ui.checkbox_use_autoip->setEnabled(true);
        ui.topic_set->setEnabled(true);
        //地图和路线设置是在ros连接时才能够打开。
        ui.map_set->setEnabled(false);
        ui.route_set->setEnabled(false);
    }
}

/*
* 自动检测ip的槽函数
* 部件：check_box_use_autoip
* （这部分其实是demo自带的）
*/
void MainWindow::on_checkbox_use_autoip_stateChanged(int state) {
    bool enabled;
    if ( state == 0 ) {
        enabled = true;
        //自动获取ip
    } else {
        // ip
        foreach (QHostAddress address, QNetworkInterface::allAddresses()) {
            if (address.protocol() == QAbstractSocket::IPv4Protocol) {
                QString addre = address.toString();
                if (addre.split(".")[0] == "192") {
                    m_qRosIp = addre;
                    m_qMasterIp = "http://" + addre + ":11311";
                } else if (addre.split(".")[0] == "10") {
                    m_qRosIp = addre;
                    m_qMasterIp = "http://" + addre + ":11311";
                } else if (addre.split(".")[0] == "172") {
                    m_qRosIp = addre;
                    m_qMasterIp = "http://" + addre + ":11311";
                }
            }
        }

        ui.line_edit_master->setText(m_qMasterIp);
        ui.line_edit_host->setText(m_qRosIp);
        enabled = false;
    }
    ui.line_edit_master->setEnabled(enabled);
    ui.line_edit_host->setEnabled(enabled);
}

/*****************************************************************************
** Implemenation [Slots][manually connected]
*****************************************************************************/

//一个优化的函数
/**
 * This function is signalled by the underlying model. When the model changes,
 * this will drop the cursor down to the last line in the QListview to ensure
 * the user can always see the latest log message.
 */
void MainWindow::updateLoggingView() {
    ui.view_logging->scrollToBottom();
}

/*****************************************************************************
** Implementation [Menu]
*****************************************************************************/

//应该可以无视
void MainWindow::on_actionAbout_triggered() {
    QMessageBox::about(this, tr("About ..."),tr("<h2>PACKAGE_NAME Test Program 0.10</h2><p>Copyright Yujin Robot</p><p>This package needs an about description.</p>"));
}

/*****************************************************************************
** Implementation [Configuration]
*****************************************************************************/

//读取设定
void MainWindow::ReadSettings() {
    QSettings settings("Qt-Ros-Wqt", "GPS-Win-Set");

    restoreGeometry(settings.value("geometry").toByteArray());
    restoreState(settings.value("windowState").toByteArray());

    //默认的主机和host
    QString master_url = settings.value("master_url",QString("http://192.168.1.2:11311/")).toString();
    QString host_url = settings.value("host_url", QString("192.168.1.3")).toString();
    //QString topic_name = settings.value("topic_name", QString("/chatter")).toString();

    ui.line_edit_master->setText(master_url);
    ui.line_edit_host->setText(host_url);

    //自动ip和默认设置
    bool remember = settings.value("remember_settings", false).toBool();
    ui.checkbox_remember_settings->setChecked(remember);
    bool checked = settings.value("use_auto_ip", false).toBool();
    ui.checkbox_use_autoip->setChecked(checked);
    if ( checked ) {
        ui.line_edit_master->setEnabled(false);
        ui.line_edit_host->setEnabled(false);
    }

    ui.lineEdit_pose_topic->setText(settings.value("topic/topic_pose", "pub_mid_pos").toString());
    ui.lineEdit_mapset_topic->setText(settings.value("topic/topic_mapset", "map_set").toString());
}

//gps调试窗口的设置的设置
void MainWindow::WriteSettings() {
    //设定的名称？
    QSettings settings("Qt-Ros-Wqt", "GPS-Win-Set");

    //url setting
    settings.setValue("master_url",ui.line_edit_master->text());
    settings.setValue("host_url",ui.line_edit_host->text());
    //自动ip设置
    settings.setValue("use_auto_ip",QVariant(ui.checkbox_use_autoip->isChecked()));
    //窗口设置
    settings.setValue("geometry", saveGeometry());
    settings.setValue("windowState", saveState());
    //保存设置
    settings.setValue("remember_settings",QVariant(ui.checkbox_remember_settings->isChecked()));
    //话题设置
    settings.setValue("topic/topic_pose",ui.lineEdit_pose_topic->text());
    settings.setValue("topic/topic_mapset",ui.lineEdit_mapset_topic->text());
}

//见面关闭时触发
void MainWindow::closeEvent(QCloseEvent *event)
{
    WriteSettings();
    emit ExitWin();
    QMainWindow::closeEvent(event);
}

//拉伸窗口触发
void MainWindow::resizeEvent(QResizeEvent *event){

    QMainWindow::resizeEvent(event);
    ui.label_map->resize(ui.widget_3->size());
    qDebug() << "resize event triggered." << endl;
}

/*
 * 路径规划：弓形
 * 参数：长宽间隔
*/
void MainWindow::PathPlan1(double length,double width,double lane)
{
    QVector<double> temp = {0,0};
    pathknee.clear();
    qDebug()<<"pathknee:"<<pathknee<<endl;
    //长 / 两倍间隔
    int num_i = int(length/(lane*2));//一个点代表上-右-下四个点

    /*
        | |
        | |
        |_|
      * 这样是一次循环
    */
    for(int i=0;i<num_i;i++)
    {

        temp[0] = lane/2 + i*lane*2;
        temp[1] = lane/2;
        pathknee.append(temp);//一条边的起点x,y
        temp[0] = lane/2 + i*lane*2;
        temp[1] = width+lane/2;
        pathknee.append(temp);//该边的终点
        temp[0] = lane/2*3 + i*lane*2;
        temp[1] = width+lane/2;
        pathknee.append(temp);//折边的终点
        temp[0] = lane/2*3 + i*lane*2;
        temp[1] = lane/2;
        pathknee.append(temp);//右边的终点
    }

    //结果来看是让地图画的更加完整
    int num_ii = int(length/lane);
    if(num_ii%2 == 0)
    {
        temp[0] = lane/2 + num_i*lane*2;
        temp[1] = lane/2;
        pathknee.append(temp);
        temp[0] = lane/2 + num_i*lane*2;
        temp[1] = width+lane/2;
        pathknee.append(temp);
    }
    else
    {
        temp[0] = lane/2 + num_i*lane*2;
        temp[1] = lane/2;
        pathknee.append(temp);
        temp[0] = lane/2 + num_i*lane*2;
        temp[1] = width+lane/2;
        pathknee.append(temp);
        temp[0] = lane/2*3 + num_i*lane*2;
        temp[1] = width+lane/2;
        pathknee.append(temp);
        temp[0] = lane/2*3 + num_i*lane*2;
        temp[1] = lane/2;
        pathknee.append(temp);
    }
    qDebug()<<"pathknee:"<<pathknee<<endl;
}

void MainWindow::PathPlan2(double length,double width,double lane)
{
    QVector<double> temp = {0,0};
    pathknee.clear();
    qDebug()<<"pathknee:"<<pathknee<<endl;
    int num_i = int(length/lane/2);
    for(int i=0;i<num_i;i++)
    {
        temp[0] = lane/2 + i*lane;
        temp[1] = lane/2;
        pathknee.append(temp);
        temp[0] = lane/2 + i*lane;
        temp[1] = width+lane/2;
        pathknee.append(temp);
        temp[0] = lane*(num_i+2)/2 + i*lane;
        temp[1] = width+lane;
        pathknee.append(temp);
        temp[0] = lane*(num_i + 1.5) + i*lane;
        temp[1] = width+lane/2;
        pathknee.append(temp);
        temp[0] = lane*(num_i + 1.5) + i*lane;
        temp[1] = lane/2;
        pathknee.append(temp);
        temp[0] = lane*(num_i+3)/2 + i*lane;
        temp[1] = 0;
        pathknee.append(temp);
    }
    int num_ii = int(length/lane);
    if(num_ii%2 == 0)
    {
        temp[0] = lane/2 + num_i*lane;
        temp[1] = lane/2;
        pathknee.append(temp);
        temp[0] = lane/2 + num_i*lane;
        temp[1] = width+lane/2;
        pathknee.append(temp);
    }
    else
    {
        temp[0] = lane/2 + num_i*lane;
        temp[1] = lane/2;
        pathknee.append(temp);
        temp[0] = lane/2 + num_i*lane;
        temp[1] = width+lane/2;
        pathknee.append(temp);
        temp[0] = lane*(num_i+2)/2 + num_i*lane;
        temp[1] = width+lane;
        pathknee.append(temp);
        temp[0] = lane*(num_i + 1.5) + num_i*lane;
        temp[1] = width+lane/2;
        pathknee.append(temp);
        temp[0] = lane*(num_i + 1.5) + num_i*lane;
        temp[1] = lane/2;
        pathknee.append(temp);
    }
    qDebug()<<"pathknee:"<<pathknee<<endl;
}

//执行sh脚本
QString MainWindow::executeLinuxCmd(const QString& cmd)
{
    QProcess p;
    p.start("bash", QStringList() <<"-c" << cmd);
    bool flag = p.waitForFinished();
    Q_UNUSED(flag);
    //    qDebug() << flag <<endl;
    QByteArray Result = p.readAllStandardOutput();
    //   qDebug() << Result<< endl;
    return QString(Result);

}

inline void MainWindow::_showWrongInfo(const QString &msg)
{
    QMessageBox msgBox;
    msgBox.setText(msg);
    msgBox.exec();
    return;
}

void MainWindow::_runJsCommand(const QString &cmd)
{
    //qDebug() << "executing run Js command." << endl;
    page->runJavaScript(cmd);
    view->setPage(page);
}

inline QString MainWindow::_getAbsFilePath(const QDir &dir)
{
    return dir.absolutePath();
}

void MainWindow::_clearJsRelated()
{
    pointSet.clear();
    planPoints.clear();
    QDir temDir(_initPointsFileName);
    QFile file(_getAbsFilePath(temDir));
    file.open(QIODevice::WriteOnly);    //clear
    file.close();
    ui.slam_launcher->setEnabled(false);
    ui.plan_launcher->setEnabled(false);
    //        ui.follow_launcher->setEnabled(false);
}

void MainWindow::initButtons()
{
    ui.locate_button->setEnabled(false);
    ui.init_button->setEnabled(false);
    ui.route_generate->setEnabled(false);
    ui.slam_launcher->setEnabled(true);
    ui.plan_launcher->setEnabled(true);
    ui.follow_launcher->setEnabled(true);
    ui.gps_mark_radio_button->setEnabled(false);
    ui.mouse_mark_radio_button->setEnabled(false);
    ui.mark_button->setEnabled(false);
    ui.bringup_all->setEnabled(true);
    if ( ui.checkbox_remember_settings->isChecked() ) {
        on_button_connect_clicked(true);
    }
}

void MainWindow::initWebEngineRelated()
{
    //网络文件编辑： QWebEngineView *view;
    view = new QWebEngineView(this);
    page = new QWebEnginePage(this);
    channel = new QWebChannel(this);
    channel->registerObject(QString("person"),this);
    page->setWebChannel(channel);
    file =  new QFile();
}

void MainWindow::initLayout()
{
    layout = new QStackedLayout(ui.label_map);
    ui.label_map->setLayout(layout);
    layout->addWidget(view);
    mapLayout = new QStackedLayout();
    ui.baidumap->setLayout(mapLayout);
    ui.tab_manager->setCurrentIndex(0); // ensure the first tab is showing - qt-designer should have this already hardwired, but often loses it (settings?).
}

void MainWindow::initConnections()
{
    QObject::connect(ui.actionAbout_Qt, SIGNAL(triggered(bool)), qApp, SLOT(aboutQt())); // qApp is a global variable for the application
    QObject::connect(&qnode, SIGNAL(rosShutdown()), this, SLOT(shutdownMessage()));
    QObject::connect(&qnode, SIGNAL(loggingUpdated()), this, SLOT(updateLoggingView()));
}
void MainWindow::initTimer()
{
    QTimer::singleShot(300, this, [=](){
        layout->removeWidget(view);
        // img_map =new QImage;//新建一个image对象
        img_map.load(":/images/map.jpg"); //载入图片到img对象中
        ui.label_map->setScaledContents(true); //平铺
        ui.label_map->resize(ui.widget_3->size());//label_map放在widget_3里
        qDebug()<<"change:"<<ui.label_map->size()<<endl;
        ui.label_map->setPixmap(QPixmap::fromImage(img_map));
    });
}

void MainWindow::initFileName()
{
    _bMapJsName = QUrl("qrc:/map/test.html");
    _initPointsFileName = "../initPoints.txt";
    _routeGeneratorSh = "../test.sh";
    _followStartSh = "../follow.sh";

    _sensorRecordSh = "../toBeContinue.sh";
    _slamStartSh = "../ttt.sh";
}

void MainWindow::initNullptr()
{
    _gpsThread = nullptr;
    _slamSetWindow = nullptr;
}

void MainWindow::releaseHeap()
{
    if(layout) delete layout;
    if(view) delete view;
    if(mapLayout) delete mapLayout;
    if(channel) delete channel;
    if(page) delete page;
    if(file) delete file;
    if(_gpsThread) delete _gpsThread;
    if(_slamSetWindow) delete _slamSetWindow;

}
}

/*
 * 在地图上画并确认的槽函数
*/
void class1_ros_qt_demo::MainWindow::on_button_set_startP_clicked(bool checked)
{
    Q_UNUSED(checked);
    //长宽间距都要大于0
    if(ui.lineEdit_set_length->text().toDouble() > 0 && ui.lineEdit_set_width->text().toDouble() > 0 && ui.lineEdit_set_lane->text().toDouble() > 0)
    {
        //web enigine
        layout->removeWidget(view);

        /*
         * ros节点：设置地图
         * 传入长宽间距
        */
        qnode.setmap(ui.lineEdit_set_length->text().toDouble(),ui.lineEdit_set_width->text().toDouble(),ui.lineEdit_set_lane->text().toDouble());
        //地图设置
        img_map1 = img_map;
        QPainter painter(&img_map1);//在该图上画
        qDebug()<<"img_map1:"<<img_map1.width()<<"    "<<img_map1.height()<<endl;;

        //地图的长or宽 / 规划区域的长or宽　＋ 间隔
        //感觉是在计算因子
        double wid_mul = (img_map1.width()-50) / (ui.lineEdit_set_length->text().toDouble()+ui.lineEdit_set_lane->text().toDouble());
        double heg_mul = (img_map1.height()-50) / (ui.lineEdit_set_width->text().toDouble()+ui.lineEdit_set_lane->text().toDouble());

        //选取较小的比例系数
        minmul = qMin(wid_mul, heg_mul);
        qDebug()<<"mul:"<<wid_mul<<"    "<<heg_mul<<"    "<<minmul<<endl;


        int wid_temp = int((ui.lineEdit_set_length->text().toDouble()+ui.lineEdit_set_lane->text().toDouble()) * minmul / 2);
        int heg_temp = int((ui.lineEdit_set_width->text().toDouble()+ui.lineEdit_set_lane->text().toDouble()) * minmul / 2);
        qDebug()<<"temp:"<<wid_temp<<"    "<<heg_temp<<endl;

        //长方形的起始点
        startx = img_map1.width()/2 - wid_temp;
        starty = img_map1.height()/2 - heg_temp;

        //画长方形
        painter.setPen(QPen(Qt::red, 10));
        painter.drawRect(QRect(startx,starty, wid_temp*2, heg_temp*2));

        //相当于是先画到图上，然后显示图
        ui.label_map->setPixmap(QPixmap::fromImage(img_map1));//这行一定要有，不然不会实时更新到窗口
    }
    else
    {
        // ui.label_map->setPixmap(QPixmap::fromImage(img_map));//这行一定要有，不然不会实时更新到窗口
        // qDebug()<<"SAME"<<endl;
        _showWrongInfo("请正确设置地图参数！");
    }
}

//弓形规划的槽函数
void class1_ros_qt_demo::MainWindow::on_radioButton_plan1_clicked(bool checked)
{
    Q_UNUSED(checked);
    //qDebug()<<"widget_width:"<<ui.widget_3->width()<<endl;

    if(ui.lineEdit_set_length->text().toDouble() > 0 && ui.lineEdit_set_width->text().toDouble() > 0 && ui.lineEdit_set_lane->text().toDouble() > 0)
    {
        ui.button_ok_P->setEnabled(false);
        layout->removeWidget(view);
        //弓形规划：传入设定的地图参数
        //设置好要画的
        PathPlan1(ui.lineEdit_set_length->text().toDouble(),ui.lineEdit_set_width->text().toDouble(),ui.lineEdit_set_lane->text().toDouble());

        //画在这个上面
        img_map2 = img_map1;
        QPainter painter(&img_map2);
        qDebug()<<"img_map2:"<<img_map2.width()<<"    "<<img_map2.height()<<endl;
        painter.setPen(QPen(Qt::green, 5));

        qDebug()<<"size:"<<pathknee.size()<<endl;

        //根据这些点来画线
        for(int i=0;i<pathknee.size()-1;i++)
        {
            //采用两点确定线的方式
            painter.drawLine(QPointF(pathknee[i][0]*minmul+startx,pathknee[i][1]*minmul+starty),
                    QPointF(pathknee[i+1][0]*minmul+startx,pathknee[i+1][1]*minmul+starty));
        }
        ui.label_map->setPixmap(QPixmap::fromImage(img_map2));//这行一定要有，不然不会实时更新到窗口
    }
    else
    {
        _showWrongInfo("请正确设置地图参数！");
        ui.radioButton_plan1->setAutoExclusive(false);
        ui.radioButton_plan1->setChecked(false);
        ui.radioButton_plan1->setAutoExclusive(true);
    }
}

//隔行路线
//逻辑都是一样的
void class1_ros_qt_demo::MainWindow::on_radioButton_plan2_clicked(bool checked)
{
    Q_UNUSED(checked);
    if(ui.lineEdit_set_length->text().toDouble() > 0 && ui.lineEdit_set_width->text().toDouble() > 0 && ui.lineEdit_set_lane->text().toDouble() > 0)
    {
        ui.button_ok_P->setEnabled(false);
        layout->removeWidget(view);

        PathPlan2(ui.lineEdit_set_length->text().toDouble(),ui.lineEdit_set_width->text().toDouble(),ui.lineEdit_set_lane->text().toDouble());
        img_map2 = img_map1;
        QPainter painter(&img_map2);
        qDebug()<<"img_map2:"<<img_map2.width()<<"    "<<img_map2.height()<<endl;
        painter.setPen(QPen(Qt::green, 5));
        qDebug()<<"size:"<<pathknee.size()<<endl;
        for(int i=0;i<pathknee.size()-1;i++)
        {
            painter.drawLine(QPointF(pathknee[i][0]*minmul+startx,pathknee[i][1]*minmul+starty),QPointF(pathknee[i+1][0]*minmul+startx,pathknee[i+1][1]*minmul+starty));
        }

        ui.label_map->setPixmap(QPixmap::fromImage(img_map2));//这行一定要有，不然不会实时更新到窗口
    }
    else
    {
        _showWrongInfo("请正确设置地图参数！");
        ui.radioButton_plan1->setAutoExclusive(false);
        ui.radioButton_plan1->setChecked(false);
        ui.radioButton_plan1->setAutoExclusive(true);
    }
}

//baidu地图的使用
void class1_ros_qt_demo::MainWindow::on_radioButton_diy1_clicked(bool checked)
{
    Q_UNUSED(checked);
    ui.button_ok_P->setEnabled(true);
    layout->addWidget(view);
    page->load(QUrl("qrc:/map/baidumap.html"));//load the map in relevant path
    view->setPage(page);
}

void class1_ros_qt_demo::MainWindow::on_load_map_button_clicked()
{
    ui.locate_button->setEnabled(true);
    ui.init_button->setEnabled(true);
    ui.gps_mark_radio_button->setEnabled(true);
    ui.mouse_mark_radio_button->setEnabled(true);
    //ui.slam_launcher->setEnabled(false);
    //    ui.plan_launcher->setEnabled(false);
    //    ui.follow_launcher->setEnabled(false);

    //其实这里就是重新设置了
    if("加载地图" == ui.load_map_button->text()){
        //因为加载需要时间，所以这里不能直接接着运行js
        page->load(_bMapJsName);
        mapLayout->addWidget(view);
        view->setPage(page);
        ui.load_map_button->setText("重新加载");
    }else{
        QString command = QString("markpoint(%1,%2)")
                .arg(QString::number(-1,'f', 6))
                .arg(QString::number(-1,'f', 6));
        _runJsCommand(command);

        if(ui.mouse_mark_radio_button->isChecked()) page->runJavaScript("enableMouseMark(1)");
    }
}

void class1_ros_qt_demo::MainWindow::on_locate_button_clicked()
{
    //这里就不用addWidget了
    if(ui.latitude_set->text().toDouble() > 0 && ui.longtitude_set->text().toDouble() > 0){
        QVector<double> temp = {0, 0};
        QString lat = ui.latitude_set->text();
        QString lng = ui.longtitude_set->text();
        //运行js脚本里的movepoint函数，参数是lng和lat
        QString command = QString("markpoint(%1,%2)").arg(lng).arg(lat);

        temp[0] = lng.toDouble();
        temp[1] = lat.toDouble();
        //        qDebug()<<"temp0: " << temp[0]<<endl;
        //        qDebug()<<"temp1: " << temp[1]<<endl;
        pointSet.append(temp);
        _runJsCommand(command);
    }
    else{
        _showWrongInfo("请正确设置地图参数！");
    }
}

void class1_ros_qt_demo::MainWindow::on_init_button_clicked()
{
    if(ui.mouse_mark_radio_button->isChecked() || ui.gps_mark_radio_button->isChecked()){
        if(pointSet.size() == 0){
            _showWrongInfo("初始点目前为空！"); return;
        }else{
            if(pointSet.size() < 4){
                _showWrongInfo("请至少标定四个点！"); return;
            }
            //pointSet.clear();
            for(int i = 0; i < pointSet.size(); i++){
                //qDebug() << pointSet[i][0] << pointSet[i][1] <<endl;
                QString command = QString("markpoint(%1,%2)")
                        .arg(QString::number(pointSet[i][0],'f', 6))
                        .arg(QString::number(pointSet[i][1],'f', 6));
                qDebug() <<fixed << qSetRealNumberPrecision(4) << command <<endl;
                _runJsCommand(command);
            }

            QString command = QString("markpoint(%1,%2)")
                    .arg(QString::number(pointSet[0][0],'f', 6))
                    .arg(QString::number(pointSet[0][1],'f', 6));
            _runJsCommand(command);
            //page->runJavaScript(command);

            QDir temDir(_initPointsFileName);
            QFile file(_getAbsFilePath(temDir));
            file.open(QIODevice::WriteOnly);//clear
            file.close();
            if (file.open(QIODevice::ReadWrite | QIODevice::Text))
            {
                QTextStream stream(&file);
                stream.seek(file.size());
                for(int i = 0; i < pointSet.size(); i++){
                    stream << fixed << qSetRealNumberPrecision(5) << pointSet[i][0] << endl;
                    stream << fixed << qSetRealNumberPrecision(5) << pointSet[i][1] << endl;
                }
                file.close();
            }

            QString command1 = QString("countDistance(%1,%2,%3,%4)")
                    .arg(QString::number(pointSet[0][0],'f', 6))
                    .arg(QString::number(pointSet[0][1],'f', 6))
                    .arg(QString::number(pointSet[1][0],'f', 6))
                    .arg(QString::number(pointSet[1][1],'f', 6));
            page->runJavaScript(command1);//compute distance by map

            command1 = QString("countDistance(%1,%2,%3,%4)")
                    .arg(QString::number(pointSet[1][0],'f', 6))
                    .arg(QString::number(pointSet[1][1],'f', 6))
                    .arg(QString::number(pointSet[2][0],'f', 6))
                    .arg(QString::number(pointSet[2][1],'f', 6));
            page->runJavaScript(command1);//compute distance by map


            //            QDir Dir("../test.sh");
            //           QString absDir2 = Dir.absolutePath();
            //            QString filePath = "sh " + absDir2;
            //            qDebug()<<filePath;
            //            QString result = executeLinuxCmd(filePath);
            page->runJavaScript("enableMouseMark(0)");

            ui.slam_launcher->setEnabled(true);
            ui.plan_launcher->setEnabled(true);
            ui.follow_launcher->setEnabled(true);
            ui.bringup_all->setEnabled(true);
            ui.route_generate->setEnabled(true);
        }
    }else{
        _showWrongInfo("请至少选择一种标定方式！"); return;
    }
    //文本标定
    //    QString fileName = QFileDialog::getOpenFileName(this, "选择文本", "/home/itcast");
    //    qDebug() << "open file :" <<fileName << endl;
    //    file->setFileName(fileName);
    //    if(!file->open(QIODevice::ReadOnly)){
    //        QMessageBox msgBox;
    //        msgBox.setText("打开失败！");
    //        msgBox.exec();
    //       return;
    //    }

    //    pointSet.clear();
    //    int flag = 0;
    //    QVector<double> temp = {0, 0};
    //    while(!file->atEnd()){
    //        QString line = QString(file->readLine()).trimmed();
    //        qDebug() << "read: " <<line.toDouble() << endl;
    //        if(!flag){temp[0] = line.toDouble(); flag = 1;}
    //        else{
    //            temp[1] = line.toDouble();
    //            // qDebug() << fixed << qSetRealNumberPrecision(4) << temp[0] <<temp[1] <<endl;
    //            pointSet.append(temp);
    //            temp = {0, 0};
    //           flag = 0;
    //        }
    //    }
    //    file->close();
    //    ui.route_generate->setEnabled(true);
    //    for(int i = 0; i < pointSet.size(); i++){
    //        QString command;

    //qDebug() << pointSet[i][0] << pointSet[i][1] <<endl;
    //        command = QString("markpoint(%1,%2)").arg(QString::number(pointSet[i][0],'f', 6)).arg(QString::number(pointSet[i][1],'f', 6));
    //        qDebug() <<fixed << qSetRealNumberPrecision(4) << command <<endl;

    //        page->runJavaScript(command);
    //        view->setPage(page);
    //    }
    //    QString command = QString("markpoint(%1,%2)").arg(QString::number(pointSet[0][0],'f', 6)).arg(QString::number(pointSet[0][1],'f', 6));
    //    page->runJavaScript(command);

    /***********test**************/
    //    QString command1 = QString("countDistance(%1,%2,%3,%4)")
    //            .arg(QString::number(pointSet[0][0],'f', 6))
    //            .arg(QString::number(pointSet[0][1],'f', 6))
    //            .arg(QString::number(pointSet[1][0],'f', 6))
    //            .arg(QString::number(pointSet[1][1],'f', 6));
    //    page->runJavaScript(command1);//compute distance by map
    /*****************************/
    //    view->setPage(page);
}

void class1_ros_qt_demo::MainWindow::on_route_generate_clicked()
{
    QString filePath = "sh " + _getAbsFilePath(_routeGeneratorSh);
    qDebug()<<filePath;
    QString result = executeLinuxCmd(filePath);

    //文本标定
    QString fileName = QFileDialog::getOpenFileName(this, "选择文本", "/home/itcast/workingSpaceSet/guoyuan_ws/devel/lib");
    qDebug() << "open file :" <<fileName << endl;
    file->setFileName(fileName);
    if(!file->open(QIODevice::ReadOnly)){
        _showWrongInfo("打开失败！"); return;
    }
    planPoints.clear();
    int flag = 0;
    QVector<double> temp = {0, 0};
    while(!file->atEnd()){
        QString line = QString(file->readLine()).trimmed();
        //qDebug() << "read: " <<line.toDouble() << endl;
        if(!flag){temp[0] = line.toDouble(); flag = 1;}
        else{
            temp[1] = line.toDouble();
            // qDebug() << fixed << qSetRealNumberPrecision(4) << temp[0] <<temp[1] <<endl;
            planPoints.append(temp);
            temp = {0, 0};
            flag = 0;
        }
    }
    file->close();

    for(int i = 0; i < planPoints.size(); i++){
        //      qDebug() << planPoints[i][0] << planPoints[i][1] <<endl;
        QString command = QString("pathDrawer(%1,%2)").arg(QString::number(planPoints[i][0],'f', 6)).arg(QString::number(planPoints[i][1],'f', 6));
        //        qDebug() <<fixed << qSetRealNumberPrecision(4) << command <<endl;
        _runJsCommand(command);
    }
    //    QString command = QString("markpoint(%1,%2)").arg(QString::number(pointSet[0][0],'f', 6)).arg(QString::number(pointSet[0][1],'f', 6));
    //    page->runJavaScript(command);

}

//slam启动接口
void class1_ros_qt_demo::MainWindow::on_slam_launcher_clicked()
{

    //QString filePath = "sh " + _getAbsFilePath(_slamStartSh);
    //QString result = executeLinuxCmd(filePath);
    //    qDebug() << result << endl; //会输一个空的string
       //qDebug() << "i'm here" << endl;
    _slamSetWindow = new slamSet();
    _slamSetWindow->setWindowTitle("地图生成参数设置");
    _slamSetWindow->show();
    QObject::connect(_slamSetWindow, SIGNAL(_sendFinalSlamShCmd(const QString&))
                     , this, SLOT(_finalSlamShCmd(const QString&)));

}

//路径规划启动接口
void class1_ros_qt_demo::MainWindow::on_plan_launcher_clicked()
{
    if("Gps路径显示" == ui.plan_launcher->text()){
        if(nullptr == _gpsThread)_gpsThread = new GpsThread(&qnode, page, channel, view);
        QObject::connect(this, SIGNAL(_killGpsRouteThread(int)), _gpsThread, SLOT(_getGpsRouteSignal(int)));
        _gpsThread->start();
        ui.plan_launcher->setText("停止显示");
    }else{
        if(nullptr != _gpsThread && _gpsThread->isRunning()){
            emit _killGpsRouteThread(0);
            _gpsThread->wait(); //一定要加
            delete _gpsThread; _gpsThread = nullptr;
            ui.plan_launcher->setText("Gps路径显示");
        }
    }
    //QString filePath = "sh " + _getAbsFilePath(_followStartSh);
    // QString result = executeLinuxCmd(filePath);
}

//路径跟踪借口
void class1_ros_qt_demo::MainWindow::on_follow_launcher_clicked()
{
    //QDir temDir("../follow.sh");
    //QString absDir = temDir.absolutePath();
    //QString filePath = "sh " + absDir;  qDebug()<<filePath;
    //QString result = executeLinuxCmd(filePath);
}

void class1_ros_qt_demo::MainWindow::on_mouse_mark_radio_button_clicked()
{
    ui.init_button->setText("确认初始点");
    ui.init_button->setEnabled(true);
    ui.mark_button->setEnabled(false);
    QString cmd = QString("enableMouseMark(1)");
    page->runJavaScript(cmd);
}

void class1_ros_qt_demo::MainWindow::on_gps_mark_radio_button_clicked()
{
    ui.mark_button->setEnabled(true);
    ui.init_button->setEnabled(true);
    QString cmd = QString("enableMouseMark(0)");
    page->runJavaScript(cmd);
}

void class1_ros_qt_demo::MainWindow::on_mark_button_clicked()
{
    //标定当前点
    sensor_msgs::NavSatFix curPos = qnode.currentPosition();
    QVector<double>temp = {0, 0};
    temp[0] = curPos.longitude;
    temp[1] = curPos.latitude;
    //pointSet.push_back(temp);
    QString  command = QString("justMarkPoint(%1,%2)")
            .arg(QString::number(temp[0],'f', 6))
            .arg(QString::number(temp[1],'f', 6));
    _runJsCommand(command);
    //    qDebug() <<fixed << qSetRealNumberPrecision(4) << command <<endl;
    qDebug() << "point marked." << endl;
}

void class1_ros_qt_demo::MainWindow::on_bringup_all_clicked()
{
    //PointCloud* _pc = new PointCloud();
    // _pc->setWindowTitle(QStringLiteral("PointCloud"));
    //_pc->show();
    QString result = executeLinuxCmd("rviz");
}


void class1_ros_qt_demo::MainWindow::on_sensor_record_button_clicked()
{

}
