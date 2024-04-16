# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "mower_ctrl: 3 messages, 0 services")

set(MSG_I_FLAGS "-Imower_ctrl:/home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/ros_ws/hf_ws/src/mower_ctrl/msg;-Istd_msgs:/opt/ros/noetic/share/std_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(geneus REQUIRED)
find_package(genlisp REQUIRED)
find_package(gennodejs REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(mower_ctrl_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



get_filename_component(_filename "/home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/ros_ws/hf_ws/src/mower_ctrl/msg/CtrlCommand.msg" NAME_WE)
add_custom_target(_mower_ctrl_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mower_ctrl" "/home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/ros_ws/hf_ws/src/mower_ctrl/msg/CtrlCommand.msg" ""
)

get_filename_component(_filename "/home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/ros_ws/hf_ws/src/mower_ctrl/msg/ModeSwitch.msg" NAME_WE)
add_custom_target(_mower_ctrl_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mower_ctrl" "/home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/ros_ws/hf_ws/src/mower_ctrl/msg/ModeSwitch.msg" ""
)

get_filename_component(_filename "/home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/ros_ws/hf_ws/src/mower_ctrl/msg/SensorValue.msg" NAME_WE)
add_custom_target(_mower_ctrl_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mower_ctrl" "/home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/ros_ws/hf_ws/src/mower_ctrl/msg/SensorValue.msg" ""
)

#
#  langs = gencpp;geneus;genlisp;gennodejs;genpy
#

### Section generating for lang: gencpp
### Generating Messages
_generate_msg_cpp(mower_ctrl
  "/home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/ros_ws/hf_ws/src/mower_ctrl/msg/CtrlCommand.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mower_ctrl
)
_generate_msg_cpp(mower_ctrl
  "/home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/ros_ws/hf_ws/src/mower_ctrl/msg/ModeSwitch.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mower_ctrl
)
_generate_msg_cpp(mower_ctrl
  "/home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/ros_ws/hf_ws/src/mower_ctrl/msg/SensorValue.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mower_ctrl
)

### Generating Services

### Generating Module File
_generate_module_cpp(mower_ctrl
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mower_ctrl
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(mower_ctrl_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(mower_ctrl_generate_messages mower_ctrl_generate_messages_cpp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/ros_ws/hf_ws/src/mower_ctrl/msg/CtrlCommand.msg" NAME_WE)
add_dependencies(mower_ctrl_generate_messages_cpp _mower_ctrl_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/ros_ws/hf_ws/src/mower_ctrl/msg/ModeSwitch.msg" NAME_WE)
add_dependencies(mower_ctrl_generate_messages_cpp _mower_ctrl_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/ros_ws/hf_ws/src/mower_ctrl/msg/SensorValue.msg" NAME_WE)
add_dependencies(mower_ctrl_generate_messages_cpp _mower_ctrl_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(mower_ctrl_gencpp)
add_dependencies(mower_ctrl_gencpp mower_ctrl_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS mower_ctrl_generate_messages_cpp)

### Section generating for lang: geneus
### Generating Messages
_generate_msg_eus(mower_ctrl
  "/home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/ros_ws/hf_ws/src/mower_ctrl/msg/CtrlCommand.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/mower_ctrl
)
_generate_msg_eus(mower_ctrl
  "/home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/ros_ws/hf_ws/src/mower_ctrl/msg/ModeSwitch.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/mower_ctrl
)
_generate_msg_eus(mower_ctrl
  "/home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/ros_ws/hf_ws/src/mower_ctrl/msg/SensorValue.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/mower_ctrl
)

### Generating Services

### Generating Module File
_generate_module_eus(mower_ctrl
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/mower_ctrl
  "${ALL_GEN_OUTPUT_FILES_eus}"
)

add_custom_target(mower_ctrl_generate_messages_eus
  DEPENDS ${ALL_GEN_OUTPUT_FILES_eus}
)
add_dependencies(mower_ctrl_generate_messages mower_ctrl_generate_messages_eus)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/ros_ws/hf_ws/src/mower_ctrl/msg/CtrlCommand.msg" NAME_WE)
add_dependencies(mower_ctrl_generate_messages_eus _mower_ctrl_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/ros_ws/hf_ws/src/mower_ctrl/msg/ModeSwitch.msg" NAME_WE)
add_dependencies(mower_ctrl_generate_messages_eus _mower_ctrl_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/ros_ws/hf_ws/src/mower_ctrl/msg/SensorValue.msg" NAME_WE)
add_dependencies(mower_ctrl_generate_messages_eus _mower_ctrl_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(mower_ctrl_geneus)
add_dependencies(mower_ctrl_geneus mower_ctrl_generate_messages_eus)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS mower_ctrl_generate_messages_eus)

### Section generating for lang: genlisp
### Generating Messages
_generate_msg_lisp(mower_ctrl
  "/home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/ros_ws/hf_ws/src/mower_ctrl/msg/CtrlCommand.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/mower_ctrl
)
_generate_msg_lisp(mower_ctrl
  "/home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/ros_ws/hf_ws/src/mower_ctrl/msg/ModeSwitch.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/mower_ctrl
)
_generate_msg_lisp(mower_ctrl
  "/home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/ros_ws/hf_ws/src/mower_ctrl/msg/SensorValue.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/mower_ctrl
)

### Generating Services

### Generating Module File
_generate_module_lisp(mower_ctrl
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/mower_ctrl
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(mower_ctrl_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(mower_ctrl_generate_messages mower_ctrl_generate_messages_lisp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/ros_ws/hf_ws/src/mower_ctrl/msg/CtrlCommand.msg" NAME_WE)
add_dependencies(mower_ctrl_generate_messages_lisp _mower_ctrl_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/ros_ws/hf_ws/src/mower_ctrl/msg/ModeSwitch.msg" NAME_WE)
add_dependencies(mower_ctrl_generate_messages_lisp _mower_ctrl_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/ros_ws/hf_ws/src/mower_ctrl/msg/SensorValue.msg" NAME_WE)
add_dependencies(mower_ctrl_generate_messages_lisp _mower_ctrl_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(mower_ctrl_genlisp)
add_dependencies(mower_ctrl_genlisp mower_ctrl_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS mower_ctrl_generate_messages_lisp)

### Section generating for lang: gennodejs
### Generating Messages
_generate_msg_nodejs(mower_ctrl
  "/home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/ros_ws/hf_ws/src/mower_ctrl/msg/CtrlCommand.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/mower_ctrl
)
_generate_msg_nodejs(mower_ctrl
  "/home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/ros_ws/hf_ws/src/mower_ctrl/msg/ModeSwitch.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/mower_ctrl
)
_generate_msg_nodejs(mower_ctrl
  "/home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/ros_ws/hf_ws/src/mower_ctrl/msg/SensorValue.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/mower_ctrl
)

### Generating Services

### Generating Module File
_generate_module_nodejs(mower_ctrl
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/mower_ctrl
  "${ALL_GEN_OUTPUT_FILES_nodejs}"
)

add_custom_target(mower_ctrl_generate_messages_nodejs
  DEPENDS ${ALL_GEN_OUTPUT_FILES_nodejs}
)
add_dependencies(mower_ctrl_generate_messages mower_ctrl_generate_messages_nodejs)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/ros_ws/hf_ws/src/mower_ctrl/msg/CtrlCommand.msg" NAME_WE)
add_dependencies(mower_ctrl_generate_messages_nodejs _mower_ctrl_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/ros_ws/hf_ws/src/mower_ctrl/msg/ModeSwitch.msg" NAME_WE)
add_dependencies(mower_ctrl_generate_messages_nodejs _mower_ctrl_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/ros_ws/hf_ws/src/mower_ctrl/msg/SensorValue.msg" NAME_WE)
add_dependencies(mower_ctrl_generate_messages_nodejs _mower_ctrl_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(mower_ctrl_gennodejs)
add_dependencies(mower_ctrl_gennodejs mower_ctrl_generate_messages_nodejs)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS mower_ctrl_generate_messages_nodejs)

### Section generating for lang: genpy
### Generating Messages
_generate_msg_py(mower_ctrl
  "/home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/ros_ws/hf_ws/src/mower_ctrl/msg/CtrlCommand.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mower_ctrl
)
_generate_msg_py(mower_ctrl
  "/home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/ros_ws/hf_ws/src/mower_ctrl/msg/ModeSwitch.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mower_ctrl
)
_generate_msg_py(mower_ctrl
  "/home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/ros_ws/hf_ws/src/mower_ctrl/msg/SensorValue.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mower_ctrl
)

### Generating Services

### Generating Module File
_generate_module_py(mower_ctrl
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mower_ctrl
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(mower_ctrl_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(mower_ctrl_generate_messages mower_ctrl_generate_messages_py)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/ros_ws/hf_ws/src/mower_ctrl/msg/CtrlCommand.msg" NAME_WE)
add_dependencies(mower_ctrl_generate_messages_py _mower_ctrl_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/ros_ws/hf_ws/src/mower_ctrl/msg/ModeSwitch.msg" NAME_WE)
add_dependencies(mower_ctrl_generate_messages_py _mower_ctrl_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/ros_ws/hf_ws/src/mower_ctrl/msg/SensorValue.msg" NAME_WE)
add_dependencies(mower_ctrl_generate_messages_py _mower_ctrl_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(mower_ctrl_genpy)
add_dependencies(mower_ctrl_genpy mower_ctrl_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS mower_ctrl_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mower_ctrl)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mower_ctrl
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_cpp)
  add_dependencies(mower_ctrl_generate_messages_cpp std_msgs_generate_messages_cpp)
endif()

if(geneus_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/mower_ctrl)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/mower_ctrl
    DESTINATION ${geneus_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_eus)
  add_dependencies(mower_ctrl_generate_messages_eus std_msgs_generate_messages_eus)
endif()

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/mower_ctrl)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/mower_ctrl
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_lisp)
  add_dependencies(mower_ctrl_generate_messages_lisp std_msgs_generate_messages_lisp)
endif()

if(gennodejs_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/mower_ctrl)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/mower_ctrl
    DESTINATION ${gennodejs_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_nodejs)
  add_dependencies(mower_ctrl_generate_messages_nodejs std_msgs_generate_messages_nodejs)
endif()

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mower_ctrl)
  install(CODE "execute_process(COMMAND \"/usr/bin/python3\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mower_ctrl\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mower_ctrl
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_py)
  add_dependencies(mower_ctrl_generate_messages_py std_msgs_generate_messages_py)
endif()
