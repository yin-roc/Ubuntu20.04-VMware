# Install script for directory: /home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/ros_ws/ROS_demo_ws/src/demo03_ws/src/one_urdf01_rviz

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/ros_ws/ROS_demo_ws/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "RelWithDebInfo")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/ros_ws/ROS_demo_ws/build/demo03_ws/src/one_urdf01_rviz/catkin_generated/installspace/one_urdf01_rviz.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/one_urdf01_rviz/cmake" TYPE FILE FILES
    "/home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/ros_ws/ROS_demo_ws/build/demo03_ws/src/one_urdf01_rviz/catkin_generated/installspace/one_urdf01_rvizConfig.cmake"
    "/home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/ros_ws/ROS_demo_ws/build/demo03_ws/src/one_urdf01_rviz/catkin_generated/installspace/one_urdf01_rvizConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/one_urdf01_rviz" TYPE FILE FILES "/home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/ros_ws/ROS_demo_ws/src/demo03_ws/src/one_urdf01_rviz/package.xml")
endif()

