cmake_minimum_required(VERSION 3.8)
project(cursor)
add_library(
    ${PROJECT_NAME} STATIC 
    ./cpp/cursor.cpp)
target_include_directories(
    ${PROJECT_NAME} INTERFACE 
    ./hpp)