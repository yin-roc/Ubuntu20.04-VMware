# 单行注释：这是一个 CMakeLists.txt 文件
#[[ 多行注释：
这是一个 CMakeLists.txt 文件，
这是一个 CMakeLists.txt 文件 ]]
cmake_minimum_required(VERSION 3.0.0)
project(CALC VERSION 0.1.0 LANGUAGES C CXX)

# 包含头文件
include_directories(${PROJECT_SOURCE_DIR}/include)

set(CMAKE_CXX_STANDARD 11)

# 设置可执行文件的存放路径 （绝对路径）
set(HOME /home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/VsCode_ws/CALC/build)
set(EXECUTABLE_OUTPUT_PATH ${HOME}/bin)

# 定义可执行文件
# aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/src SRC_LIST)
file(GLOB MAIN_SRC ${CMAKE_CURRENT_SOURCE_DIR}/src/*.c)
file(GLOB MAIN_HEAD ${CMAKE_CURRENT_SOURCE_DIR}/include/*.h)

# set(SRC_LIST main.c add.c sub.c mult.c div.c)
# add_executable(CALC main.c add.c sub.c mult.c div.c)
add_executable(CALC ${MAIN_SRC})