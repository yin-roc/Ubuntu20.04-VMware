#include "../include/ros_qt_demo/pointcloud.hpp"
#include "ui_pointcloud.h"

PointCloud::PointCloud(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PointCloud)
{
    ui->setupUi(this);

    _initRviz();
    _initConnections();
}

PointCloud::~PointCloud()
{
    if(_rviz)delete _rviz;

    delete ui;
}

void PointCloud::_initRviz()
{
    ui->label_rviz_show->hide();
    _rviz = new QRviz(ui->rviz_layout, "qrviz");
    connect(_rviz, &QRviz::ReturnModelSignal, this, &PointCloud::_RvizGetModel);
    _rviz->GetDisplayTreeModel();
    QMap<QString, QVariant> namevalue;
    namevalue.insert("Line Style", "Billboards");
    namevalue.insert("Color", QColor(160, 160, 160));
    namevalue.insert("Plane Cell Count", 5);
    _rviz->DisplayInit(RVIZ_DISPLAY_GRID, "adjustable grid", true, namevalue);
}

void PointCloud::_RvizGetModel(QAbstractItemModel *model)
{
    m_modelRvizDisplay = model;
    ui->rvizDisplayTree->setModel(model);
}

void PointCloud::_iniData()
{
    m_mapRvizDisplays.insert("Axes", RVIZ_DISPLAY_AXES);
    m_mapRvizDisplays.insert("Camera", RVIZ_DISPLAY_CAMERA);
    m_mapRvizDisplays.insert("DepthCloud", RVIZ_DISPLAY_DEPTHCLOUD);
    m_mapRvizDisplays.insert("Effort", RVIZ_DISPLAY_EFFORT);
    m_mapRvizDisplays.insert("FluidPressure", RVIZ_DISPLAY_FLUIDPRESSURE);
    m_mapRvizDisplays.insert("Grid", RVIZ_DISPLAY_GRID);
    m_mapRvizDisplays.insert("GridCells", RVIZ_DISPLAY_GRIDCELLS);
    m_mapRvizDisplays.insert("Group", RVIZ_DISPLAY_GROUP);
    m_mapRvizDisplays.insert("Illuminance", RVIZ_DISPLAY_ILLUMINANCE);
    m_mapRvizDisplays.insert("Image", RVIZ_DISPLAY_IMAGE);
    m_mapRvizDisplays.insert("InterativerMarker", RVIZ_DISPLAY_INTERATIVEMARKER);
    m_mapRvizDisplays.insert("LaserScan", RVIZ_DISPLAY_LASERSCAN);
    m_mapRvizDisplays.insert("Map", RVIZ_DISPLAY_MAP);
    m_mapRvizDisplays.insert("Marker", RVIZ_DISPLAY_MARKER);
    m_mapRvizDisplays.insert("MarkerArray", RVIZ_DISPLAY_MARKERARRAY);
    m_mapRvizDisplays.insert("Odometry", RVIZ_DISPLAY_ODOMETRY);
    m_mapRvizDisplays.insert("Path", RVIZ_DISPLAY_PATH);
    m_mapRvizDisplays.insert("PointCloud", RVIZ_DISPLAY_POINTCLOUD);
    m_mapRvizDisplays.insert("PointCloud2", RVIZ_DISPLAY_POINTCLOUD2);
    m_mapRvizDisplays.insert("PointStamped", RVIZ_DISPLAY_POINTSTAMPED);
    m_mapRvizDisplays.insert("Polygon", RVIZ_DISPLAY_POLYGON);
    m_mapRvizDisplays.insert("Pose", RVIZ_DISPLAY_POSE);
    m_mapRvizDisplays.insert("PoseArray", RVIZ_DISPLAY_POSEARRAY);
    m_mapRvizDisplays.insert("PoseWithCovariance", RVIZ_DISPLAY_POSEWITHCOVARIANCE);
    m_mapRvizDisplays.insert("Range", RVIZ_DISPLAY_RANGE);
    m_mapRvizDisplays.insert("RelativeHumidity", RVIZ_DISPLAY_RELATIVEHUMIDITY);
    m_mapRvizDisplays.insert("RobotModel", RVIZ_DISPLAY_ROBOTMODEL);
    m_mapRvizDisplays.insert("TF", RVIZ_DISPLAY_TF);
    m_mapRvizDisplays.insert("Temperature", RVIZ_DISPLAY_TEMPERATURE);
    m_mapRvizDisplays.insert("WrenchStamped", RVIZ_DISPLAY_WRENCHSTAMPED);
}

void PointCloud::_initConnections()
{
    //2D pose
    connect(ui->setPosBtn, SIGNAL(clicked()), this, SLOT(_slotSet2DPos()));
    connect(ui->setGoalBtn, SIGNAL(clicked()), this, SLOT(_slotSet2DGoal()));
    connect(ui->moveCameraBtn, SIGNAL(clicked()), this, SLOT(_slotMoveCamera()));
    connect(ui->setSelectBtn, SIGNAL(clicked()), this, SLOT(_slotSetSelect()));
    connect(ui->setReturnBtn, SIGNAL(clicked()), this, SLOT(_slotSetReturn()));
    connect(ui->returnBtn, SIGNAL(clicked()), this, SLOT(_slotReturn()));
}

void PointCloud::_slotSet2DPos()
{
    _rviz->Set_Pos();
}

void PointCloud::_slotSet2DGoal()
{
    _rviz->Set_Goal();
}

void PointCloud::_slotMoveCamera()
{
    _rviz->Set_MoveCamera();
}

void PointCloud::_slotSetSelect()
{
    _rviz->Set_Select();
}

void PointCloud::_slotSetReturn()
{

}

void PointCloud::_slotReturn()
{

}
