/**
 * @file /src/main.cpp
 *
 * @brief Qt based gui.
 *
 * @date November 2010
 **/
/*****************************************************************************
** Includes
*****************************************************************************/

#include <QtGui>
#include <QApplication>
#include <QDesktopWidget>
#include "../include/ros_qt_demo/main_window.hpp"
#include "../include/ros_qt_demo/loginwidget.h"

/*****************************************************************************
** Main
*****************************************************************************/

int main(int argc, char **argv) {

    /*********************
    ** Qt
    **********************/
    QApplication app(argc, argv);

    //demo改的

    //class1_ros_qt_demo::MainWindow w(argc,argv);
    LoginWidget w;
    w.setWindowTitle("果蔬采摘机器人");
    w.show();
    w.move((QApplication::desktop()->width()-w.width())/2, (QApplication::desktop()->height()-w.height())/2);
    app.connect(&app, SIGNAL(lastWindowClosed()), &app, SLOT(quit()));
    int result = app.exec();

	return result;
}
