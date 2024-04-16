/**
 * @file /include/class1_ros_qt_demo/main_window.hpp
 *
 * @brief Qt based gui for class1_ros_qt_demo.
 *
 * @date November 2010
 **/
#ifndef class1_ros_qt_demo_MAIN_WINDOW_H
#define class1_ros_qt_demo_MAIN_WINDOW_H

/*****************************************************************************
** Includes
*****************************************************************************/

#include <QtWidgets/QMainWindow>
#include <QVector>
#include <QWebEngineView>
#include <QWebChannel>
#include <QStackedLayout>
#include "ui_main_window.h"
#include "mylabel.h"
#include "qnode.hpp"
#include "loginwidget.h"
#include "pointcloud.hpp"
#include "gpsthread.hpp"
#include "slamset.hpp"

/*****************************************************************************
** Namespace
*****************************************************************************/

namespace class1_ros_qt_demo {

/*****************************************************************************
** Interface [MainWindow]
*****************************************************************************/
/**
 * @brief Qt central, all operations relating to the view part here.
 */
class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(int argc, char** argv, QWidget *parent = 0);
    ~MainWindow();

    void ReadSettings(); // Load up qt program settings at startup
    void WriteSettings(); // Save qt program settings when closing

    void closeEvent(QCloseEvent *event); // Overloaded function
    void resizeEvent(QResizeEvent *event);

    void PathPlan1(double length,double width,double lane);
    void PathPlan2(double length,double width,double lane);


signals:
    void ExitWin();//新建一个信号槽

public Q_SLOTS:
    /******************************************
        ** Auto-connections (connectSlotsByName())
        *******************************************/
    void on_actionAbout_triggered();
    void on_button_connect_clicked(bool check );
    void on_checkbox_use_autoip_stateChanged(int state);
    /******************************************
    ** Manual connections
    *******************************************/
    void updateLoggingView(); // no idea why this can't connect automatically
    void shutdownMessage();

    void _finalSlamShCmd(const QString& cmd);

private:
    Ui::MainWindowDesign ui;
    QStackedLayout* layout;
    //ip链接
    QString m_qRosIp;
    QString m_qMasterIp;
    //ros 节点
    QNode qnode;
    QImage img_map;
    QImage img_map1;
    QImage img_map2;
    //定时器
    QTimer *tt;
    //路径
    QVector<QVector<double>> pathknee;
    //比例系数
    double minmul;
    int startx , starty;


private:
    double ridge;
    double length;
    QVector<QVector<double>> planPoints;
    QStackedLayout* mapLayout;
    QWebEnginePage* page;
    QWebEngineView *view;
    QWebChannel* channel;
    QFile* file;
    QVector<QVector<double>> pointSet;
    GpsThread* _gpsThread;
    slamSet* _slamSetWindow;


//private fileName
private:
    QUrl _bMapJsName;
    QString _initPointsFileName;
    QString _routeGeneratorSh;
    QString _slamStartSh;
    QString _followStartSh;
    QString _sensorRecordSh;

private slots:
    void on_init_button_clicked();
    void on_route_generate_clicked();
    void on_locate_button_clicked();
    void on_load_map_button_clicked();
    void on_radioButton_diy1_clicked(bool checked);
    void on_radioButton_plan2_clicked(bool checked);
    void on_radioButton_plan1_clicked(bool checked);
    void on_button_set_startP_clicked(bool checked);
    void on_mouse_mark_radio_button_clicked();
    void on_gps_mark_radio_button_clicked();
    void on_mark_button_clicked();
    void on_bringup_all_clicked();
    void on_follow_launcher_clicked();
    void on_plan_launcher_clicked();
    void on_slam_launcher_clicked();

//QWebChannel的槽
    void on_sensor_record_button_clicked();

public slots:
    void getCoordinates(QString lon, QString lat);
    void getDistance(double dis);
    void receivePoint(QString lon, QString lat);
    void jsDebug(QString);
//constructor
private:
    void initButtons();
    void initWebEngineRelated();
    void initLayout();
    void initConnections();
    void initTimer();
    void initFileName();
    void initNullptr();
//destructor
private:
    void releaseHeap();
//private funcs
private:
    QString executeLinuxCmd(const QString& cmd);
    inline void _showWrongInfo(const QString& msg);
    inline void _runJsCommand(const QString& cmd);
    inline QString  _getAbsFilePath(const QDir& dir);
    void _clearJsRelated();

//private signals
signals:
    void _killGpsRouteThread(int run);

};

}  // namespace class1_ros_qt_demo

#endif // class1_ros_qt_demo_MAIN_WINDOW_H
