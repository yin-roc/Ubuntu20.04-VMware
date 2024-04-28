#ifndef MAP_H
#define MAP_H

#include <QWidget>
#include <QWebEngineView>
#include "gpsmanager.h"
#include <QTimer>

namespace Ui {
class Map;
}

class Map : public QWidget
{
    Q_OBJECT

public:
    explicit Map(QWidget *parent = nullptr);
    ~Map();
    QString getCoordinatesFromAddress(const QString& address);


private:
    Ui::Map *ui;

    GPSManager *gpsManager; // add
    QTimer *timer; // add
    double lng;  // 添加这行
    double lat;

signals:
    void back_to_admin_signal(); // 信号：发送前往管理员界面信号

private slots:
    void handle_back_to_admin_signal_slot(); // 槽函数：回退到管理员界面

    void on_pushButton_clicked(); // add
    void onGpsUpdated(double latitude, double longitude); // add
    void onRouteDrawn(); // add
    void onSpeedLimitReceived(int limit); // add
    void onTimerTimeout(); // add


};

#endif // MAP_H
