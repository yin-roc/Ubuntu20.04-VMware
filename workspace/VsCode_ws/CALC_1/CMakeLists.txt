# 单行注释：这是一个 CMakeLists.txt 文件
#[[ 多行注释：
这是一个 CMakeLists.txt 文件，
这是一个 CMakeLists.txt 文件 ]]
cmake_minimum_required(VERSION 3.0.0)
project(CALC VERSION 0.1.0 LANGUAGES C CXX)

# 包含头文件
include_directories(${PROJECT_SOURCE_DIR}/include)

# 设置C++标准
set(CMAKE_CXX_STANDARD 11)

# 设置可执行文件的存放路径 （绝对路径）
set(HOME /home/yin-roc/1-Github/Ubuntu20.04-VMware/workspace/VsCode_ws/CALC_1/build)
set(EXECUTABLE_OUTPUT_PATH ${HOME}/bin)

# 定义可执行文件
# 搜索源文件，而不是一一罗列
# 法1：
# aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/src SRC_LIST)

# 法2：
file(GLOB MAIN_SRC ${CMAKE_CURRENT_SOURCE_DIR}/src/*.c)
file(GLOB MAIN_HEAD ${CMAKE_CURRENT_SOURCE_DIR}/include/*.h)

# 生成静态库
# add_library(calc STATIC ${MAIN_SRC})

# 设置动态库生成路径
# set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

# 设置动态库/静态库生成路径
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

# 生成动态库
# add_library(calc SHARED ${MAIN_SRC})

link_libraries(calc)
link_directories(${CMAKE_CURRENT_SOURCE_DIR}/lib)


# set(SRC_LIST main.c add.c sub.c mult.c div.c)
# add_executable(CALC main.c add.c sub.c mult.c div.c)
add_executable(CALC ${MAIN_SRC})