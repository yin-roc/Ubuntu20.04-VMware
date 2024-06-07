cmake_minimum_required(VERSION 3.0)
project(TEST)

# 自定义 DEBUG 宏
add_definitions(-DDEBUG)

file(GLOB MAIN_SRC ${CMAKE_CURRENT_SOURCE_DIR}/*.c)
add_executable(app test.c)