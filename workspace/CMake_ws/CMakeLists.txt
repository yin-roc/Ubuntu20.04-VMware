cmake_minimum_required(VERSION 3.0)
project(CALC)

set(CMAKE_CXX_STANDARD 11)
set(SRC_LIST add.c div.c mult.c sub.c main.c)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)
add_executable(app ${SRC_LIST})