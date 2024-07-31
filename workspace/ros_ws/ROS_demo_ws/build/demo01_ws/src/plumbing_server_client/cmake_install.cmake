# Install script for directory: /home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/ros_ws/ROS_demo_ws/src/demo01_ws/src/plumbing_server_client

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/plumbing_server_client/srv" TYPE FILE FILES "/home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/ros_ws/ROS_demo_ws/src/demo01_ws/src/plumbing_server_client/srv/AddInts.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/plumbing_server_client/cmake" TYPE FILE FILES "/home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/ros_ws/ROS_demo_ws/build/demo01_ws/src/plumbing_server_client/catkin_generated/installspace/plumbing_server_client-msg-paths.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/ros_ws/ROS_demo_ws/devel/include/plumbing_server_client")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/ros_ws/ROS_demo_ws/devel/share/roseus/ros/plumbing_server_client")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/ros_ws/ROS_demo_ws/devel/share/common-lisp/ros/plumbing_server_client")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/ros_ws/ROS_demo_ws/devel/share/gennodejs/ros/plumbing_server_client")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND "/usr/bin/python3" -m compileall "/home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/ros_ws/ROS_demo_ws/devel/lib/python3/dist-packages/plumbing_server_client")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3/dist-packages" TYPE DIRECTORY FILES "/home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/ros_ws/ROS_demo_ws/devel/lib/python3/dist-packages/plumbing_server_client")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/ros_ws/ROS_demo_ws/build/demo01_ws/src/plumbing_server_client/catkin_generated/installspace/plumbing_server_client.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/plumbing_server_client/cmake" TYPE FILE FILES "/home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/ros_ws/ROS_demo_ws/build/demo01_ws/src/plumbing_server_client/catkin_generated/installspace/plumbing_server_client-msg-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/plumbing_server_client/cmake" TYPE FILE FILES
    "/home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/ros_ws/ROS_demo_ws/build/demo01_ws/src/plumbing_server_client/catkin_generated/installspace/plumbing_server_clientConfig.cmake"
    "/home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/ros_ws/ROS_demo_ws/build/demo01_ws/src/plumbing_server_client/catkin_generated/installspace/plumbing_server_clientConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/plumbing_server_client" TYPE FILE FILES "/home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/ros_ws/ROS_demo_ws/src/demo01_ws/src/plumbing_server_client/package.xml")
endif()

