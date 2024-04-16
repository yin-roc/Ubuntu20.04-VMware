#ifndef POINTCLOUD_H
#define POINTCLOUD_H

#include <QMainWindow>

#include "qrviz.hpp"
//rviz
#include <rviz/visualization_manager.h>
#include <rviz/render_panel.h>
#include <rviz/display.h>
#include <rviz/tool_manager.h>
#include <rviz/visualization_manager.h>
#include <rviz/render_panel.h>
#include <rviz/display.h>
#include <rviz/tool.h>


namespace Ui {
class PointCloud;
}

class PointCloud : public QMainWindow
{
    Q_OBJECT

public:
    explicit PointCloud(QWidget *parent = nullptr);
    ~PointCloud();

private:
    void _initRviz();
    void _RvizGetModel(QAbstractItemModel* model);
    void _iniData();
    void _initConnections();

private slots:
    void _slotSet2DPos();
    void _slotSet2DGoal();
    void _slotMoveCamera();
    void _slotSetSelect();
    void _slotSetReturn();
    void _slotReturn();


private:
    Ui::PointCloud *ui;

private:
    QRviz* _rviz;
    QAbstractItemModel* m_modelRvizDisplay;
    QMap<QString, QString> m_mapRvizDisplays;
};

#endif // POINTCLOUD_H
