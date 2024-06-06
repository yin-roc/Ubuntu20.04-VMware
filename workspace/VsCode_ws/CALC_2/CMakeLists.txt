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
set(HOME ${PROJECT_SOURCE_DIR}/build)
set(EXECUTABLE_OUTPUT_PATH ${HOME}/bin)

# 定义可执行文件
# 搜索源文件，而不是一一罗列
# 法1：
# aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/src SRC_LIST)

# 法2：
file(GLOB MAIN_SRC ${CMAKE_CURRENT_SOURCE_DIR}/src/*.c)
# file(GLOB MAIN_HEAD ${CMAKE_CURRENT_SOURCE_DIR}/include/*.h)

# 静态库和动态库可以同时设置，但不能同名；
# 可通过 set_target_properties 来设置他们的名称相同
# 生成静态库
# add_library(calc STATIC ${MAIN_SRC})

# 生成动态库
add_library(calc SHARED ${MAIN_SRC})

# 设置动态库生成路径
# set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib2)

# 设置动态库/静态库生成路径
# 设置静态库路径
# set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib2)
# 设置动态库路径
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib2)


# # 链接静态库文件 calc
# link_libraries(calc)
# # 包含静态库路径
# link_directories(${CMAKE_CURRENT_SOURCE_DIR}/lib1)

# 包含动态库路径
link_directories(${CMAKE_CURRENT_SOURCE_DIR}/lib2)

# set(SRC_LIST main.c add.c sub.c mult.c div.c)
# add_executable(CALC main.c add.c sub.c mult.c div.c)
add_executable(CALC ${MAIN_SRC})

# 链接动态库文件 calc
target_link_libraries(CALC calc)