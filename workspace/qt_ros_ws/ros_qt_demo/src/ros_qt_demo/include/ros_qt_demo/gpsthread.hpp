#ifndef GPSTHREAD_HPP
#define GPSTHREAD_HPP

#include <QThread>
#include "qnode.hpp"
#include <QWebEngineView>
#include <QWebChannel>

namespace class1_ros_qt_demo {

class GpsThread : public QThread
{
    Q_OBJECT
public:
    GpsThread(QNode* qNode, QWebEnginePage* page, QWebChannel* channel, QWebEngineView *view);
    ~GpsThread();
    void run();

private:
    QNode* _qNode;
    QWebEnginePage* _page;
    QWebChannel* _channel;
    QWebEngineView* _view;

    int _run;

private slots:
    void _getGpsRouteSignal(int flag);
};


};
#endif // GPSTHREAD_HPP
