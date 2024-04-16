#include "../include/ros_qt_demo/gpsthread.hpp"
#include <QDebug>

namespace class1_ros_qt_demo {

GpsThread::GpsThread(QNode* qNode, QWebEnginePage* page, QWebChannel* channel, QWebEngineView *view)
    : _qNode(qNode)
    , _page(page)
    , _channel(channel)
    , _view(view)
{
    _run = 1;
    qDebug() << "gps thread starts up." << endl;

}

GpsThread::~GpsThread()
{
    qDebug() << "gps thread destructed." << endl;
}

void GpsThread::run()
{
    QVector<double> lastPoint = {0, 0};
    qDebug() << "gps reader thread opens." << endl;
    while(_run){
        //qDebug() << "runing" << endl;
        //QString command = QString("pathDrawer(%1,%2)").arg(QString::number(planPoints[i][0],'f', 6)).arg(QString::number(planPoints[i][1],'f', 6));
        sensor_msgs::NavSatFix curPos = _qNode->currentPosition();
        QVector<double>temp = {0, 0};
        temp[0] = curPos.longitude; temp[1] = curPos.latitude;
        if(abs(temp[0] - lastPoint[0]) < 0.000001 && abs(temp[1] - lastPoint[1]) < 0.000001)continue;
        QString command = QString("_followPathDrawer(%1,%2)")
                .arg(QString::number(temp[0], 'f', 6))
                .arg(QString::number(temp[1], 'f', 6));
        _page->runJavaScript(command);
        _view->setPage(_page);
        lastPoint[0] = temp[0]; lastPoint[1] = temp[1];
        //sleep(5);
    }
    QString command = QString("_followPathDrawer(%1,%2)")
            .arg(QString::number(-1, 'f', 1))
            .arg(QString::number(-1, 'f', 1));
    _page->runJavaScript(command);
    _view->setPage(_page);
    qDebug() << "gps reader thread ends." << endl;
}

void GpsThread::_getGpsRouteSignal(int flag)
{
    _run = flag;
    qDebug() << "get gps halt signal." << endl;
}

};
