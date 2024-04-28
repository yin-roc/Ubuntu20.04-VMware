#ifndef GPSMANAGER_H
#define GPSMANAGER_H

#include <QObject>
#include <QWebEngineView>
#include <QRandomGenerator>

class GPSManager : public QObject
{
    Q_OBJECT
public:
    explicit GPSManager(QObject *parent = nullptr);

signals:
    void routeDrawn();
    void speedLimitReceived(int limit);
    void gpsUpdated(double latitude, double longitude);

public slots:
    void drawRoute(QWebEnginePage *webPage);
    void setGPSLocation(double latitude, double longitude);
public:
    int getSpeedLimit(double latitude, double longitude);
private:
    double currentLatitude;
    double currentLongitude;

};

#endif // GPSMANAGER_H
