# Install script for directory: /home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/ros_ws/hf_ws/src/mower_ctrl

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/ros_ws/hf_ws/install")
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

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/mower_ctrl/msg" TYPE FILE FILES
    "/home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/ros_ws/hf_ws/src/mower_ctrl/msg/CtrlCommand.msg"
    "/home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/ros_ws/hf_ws/src/mower_ctrl/msg/ModeSwitch.msg"
    "/home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/ros_ws/hf_ws/src/mower_ctrl/msg/SensorValue.msg"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/mower_ctrl/cmake" TYPE FILE FILES "/home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/ros_ws/hf_ws/build/mower_ctrl/catkin_generated/installspace/mower_ctrl-msg-paths.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/ros_ws/hf_ws/devel/include/mower_ctrl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/ros_ws/hf_ws/devel/share/roseus/ros/mower_ctrl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/ros_ws/hf_ws/devel/share/common-lisp/ros/mower_ctrl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/ros_ws/hf_ws/devel/share/gennodejs/ros/mower_ctrl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND "/usr/bin/python3" -m compileall "/home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/ros_ws/hf_ws/devel/lib/python3/dist-packages/mower_ctrl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3/dist-packages" TYPE DIRECTORY FILES "/home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/ros_ws/hf_ws/devel/lib/python3/dist-packages/mower_ctrl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/ros_ws/hf_ws/build/mower_ctrl/catkin_generated/installspace/mower_ctrl.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/mower_ctrl/cmake" TYPE FILE FILES "/home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/ros_ws/hf_ws/build/mower_ctrl/catkin_generated/installspace/mower_ctrl-msg-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/mower_ctrl/cmake" TYPE FILE FILES
    "/home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/ros_ws/hf_ws/build/mower_ctrl/catkin_generated/installspace/mower_ctrlConfig.cmake"
    "/home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/ros_ws/hf_ws/build/mower_ctrl/catkin_generated/installspace/mower_ctrlConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/mower_ctrl" TYPE FILE FILES "/home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/ros_ws/hf_ws/src/mower_ctrl/package.xml")
endif()

