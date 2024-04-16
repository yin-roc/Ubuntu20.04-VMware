cmake_minimum_required(VERSION 3.0.2)
project(demo)

## Compile as C++11, supported in ROS Kinetic and newer
# add_compile_options(-std=c++11)

## Find catkin macros and libraries
## if COMPONENTS list like find_package(catkin REQUIRED COMPONENTS xyz)
## is used, also find other catkin packages
find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  std_msgs
)

#寻找Qt的包
find_package(Qt5 COMPONENTS
        SerialPort
        WebEngineCore
        WebEngineWidgets
        WebChannel
        REQUIRED Widgets)
# find_package(Qt6 REQUIRED COMPONENTS WebChannel)

# find_package(Qt5 REQUIRED COMPONENTS  Widgets  SerialPort)

#设置自动生成moc文件，一定要设置
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)#设置工程包含当前目录，非必须


catkin_package(
#   INCLUDE_DIRS include
#   LIBRARIES demo
#   CATKIN_DEPENDS roscpp rospy std_msgs
#   DEPENDS system_lib
)

include_directories(
# include
  ${catkin_INCLUDE_DIRS}
)

#指定将要构建的可执行文件的名称，以及它所依赖的源文件
add_executable(${PROJECT_NAME}_node
        src/main.cpp
        src/mainwindow.cpp
        src/qnode1.cpp
        src/mainwindow.ui
        src/view.cpp
        src/view.ui
        src/view.h
)

#设置可执行文件依赖的库。
target_link_libraries(${PROJECT_NAME}_node ${catkin_LIBRARIES})
target_link_libraries(${PROJECT_NAME}_node
        Qt5::Widgets
        Qt5::SerialPort
        Qt5::WebEngineCore
        Qt5::WebEngineWidgets
        Qt5::WebChannel
        Qt5::WebEngineWidgets
)#链接Qt库
