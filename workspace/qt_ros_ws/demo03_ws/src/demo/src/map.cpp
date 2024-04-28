#include "map.h"
#include "ui_map.h"

Map::Map(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Map)
{
    ui->setupUi(this);

    this->setWindowTitle("地图调试界面");

    // 返回管理员界面
    connect(ui->pushButton_back_to_admin, &QPushButton::clicked, this, &Map::handle_back_to_admin_signal_slot);

    // add 创建GPSManager对象
    gpsManager = new GPSManager(this);
    // add 连接GPSManager的信号与MainWindow的槽函数
    connect(gpsManager, &GPSManager::gpsUpdated, this, &Map::onGpsUpdated);
    connect(gpsManager, &GPSManager::routeDrawn, this, &Map::onRouteDrawn);
    connect(gpsManager, &GPSManager::speedLimitReceived, this, &Map::onSpeedLimitReceived);

    ui->webEngineView->setUrl(QUrl::fromLocalFile("/home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/qt_ros_ws/demo03_ws/src/demo/src/map.html"));

    // ui->webEngineView->setUrl(QUrl("D:/QtCode/Google/map.html"));
    timer = new QTimer(this);
    timer->setInterval(5000);

}

QString Map::getCoordinatesFromAddress(const QString& address) {
    // 在这里编写获取地址坐标的逻辑，可能需要调用地图服务 API
    QString coordinates;
    // 实现获取地址坐标的逻辑...
    return coordinates;
}


Map::~Map()
{
    delete ui;
    delete gpsManager; // add
    delete timer; // add 释放定时器对象
}



void Map::handle_back_to_admin_signal_slot(){
    emit back_to_admin_signal();
}


// 用于处理按钮点击事件。
// 如果按钮上的文本是 “绘制”，则连接定时器的超时信号到 onTimerTimeout 槽函数，并启动定时器以触发路线绘制。如果按钮上的文本是 “取消绘制”，则停止定时器并重置界面上显示的路线信息。
void Map::on_pushButton_clicked()
{
    if (ui->pushButton->text() == "绘制") {
        connect(timer, &QTimer::timeout, this, &Map::onTimerTimeout);
        timer->start();
        ui->pushButton->setText("取消绘制");
    } else {
        ui->pushButton->setText("绘制");
        timer->stop();
        ui->route->setText("");
    }
}


// 这个槽函数用于处理 GPS 更新事件，更新用户界面上显示的 GPS 坐标信息。
void Map::onGpsUpdated(double longitude, double latitude)
{
    // 在这里可以更新UI以显示当前GPS坐标
    // 例如，更新UI的标签或其他元素
    qDebug("onGpsUpdated");
    ui->gps->setText(QString::number(longitude, 'f', 10) + " " + QString::number(latitude, 'f', 10));
}


// 用于处理路线绘制完成事件，更新用户界面上显示的信息
void Map::onRouteDrawn()
{
    // 在这里可以执行与路线绘制相关的操作
    // 例如，显示路线的标签或其他元素
    ui->route->setText("正在绘制路线...");
}


// 处理速度限制接收事件，更新用户界面上显示的限速信息
void Map::onSpeedLimitReceived(int limit)
{
    // 在这里可以更新UI以显示限速信息
    // 例如，显示限速信息的标签或其他元素
    ui->speed->setText("Speed Limit:" + QString::number(limit));
}


// 处理定时器超时事件
void Map::onTimerTimeout()
{
    // 在定时器槽函数中调用gpsManager的函数
    lng = lng - 0.0003;
    lat = lat - 0.0003;
    gpsManager->setGPSLocation(lng, lat);
    gpsManager->drawRoute(ui->webEngineView->page());
    qDebug("%.10f %.10f", lng, lat);
}


