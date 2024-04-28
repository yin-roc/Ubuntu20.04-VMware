#include "gpsmanager.h"

GPSManager::GPSManager(QObject *parent) : QObject(parent)
{
    currentLatitude = 0.0;
    currentLongitude = 0.0;
}


void GPSManager::drawRoute(QWebEnginePage *webPage)
{
    // 在这里触发在 HTML 页面中编写的 JavaScript 代码来绘制路线
    QString javascriptCode = QString("drawNewPoint(%1, %2);").arg(currentLatitude).arg(currentLongitude);

    if (webPage) {
        // 执行 JavaScript 代码
        webPage->runJavaScript(javascriptCode);
        qDebug() << javascriptCode << endl;
    }

    // 获取限速信息并触发信号
    int speedLimit = getSpeedLimit(currentLatitude, currentLongitude);
    emit speedLimitReceived(speedLimit);

    // 触发路线绘制完成的信号
    emit routeDrawn();
}


void GPSManager::setGPSLocation(double latitude, double longitude)
{
    // 设置 GPS 位置
    currentLatitude = latitude;
    currentLongitude = longitude;
    emit gpsUpdated(currentLatitude, currentLongitude);
    qDebug("setGPSLocation");
}


int GPSManager::getSpeedLimit(double latitude, double longitude)
{
    // 在这里查询限速信息，这是一个示例
    // 实际上，你需要与地图数据提供商的API进行交互来获取限速信息

    // 这里我们模拟返回一个随机的限速值作为示例
    int randomSpeedLimit = QRandomGenerator::global()->bounded(30, 110); // 生成30到109之间的随机数
    return randomSpeedLimit;
}




