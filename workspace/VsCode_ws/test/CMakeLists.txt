cmake_minimum_required(VERSION 3.0)
project(CALC VERSION 0.1.0 LANGUAGES C CXX)
# 指定C++标准
set(CMAKE_CXX_STANDARD 11)

# 包含头文件的路径
include_directories(${PROJECT_SOURCE_DIR}/include)

# 设置可执行文件的输出路径
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/build/bin)
# 定义可执行文件
file(GLOB src_path ${CMAKE_CURRENT_SOURCE_DIR}/src/*.c)

# 设置库文件的输出地址
# set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

# 制作静态库
# add_library(calc_static_lib STATIC ${src_path})

# 包含静态库路径
link_directories(LINK_LIBS ${PROJECT_SOURCE_DIR}/lib)
# 链接静态库
link_libraries(calc_static_lib)

# 制作动态库
# add_library(calc_shared_lib SHARED ${src_path})

add_executable(calc ${src_path})
target_link_libraries(calc ${LINK_LIBS})