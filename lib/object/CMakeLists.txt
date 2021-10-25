cmake_minimum_required(VERSION 3.8)
project(object)
add_library(
    ${PROJECT_NAME} STATIC 
    ./cpp/line.cpp)
target_include_directories(
    ${PROJECT_NAME} INTERFACE 
    ./hpp)