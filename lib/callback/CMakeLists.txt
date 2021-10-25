cmake_minimum_required(VERSION 3.8)
project(callback)
add_library(
    ${PROJECT_NAME} STATIC 
    ./cpp/display.cpp 
    ./cpp/keyboard.cpp
    ./cpp/motion.cpp
    ./cpp/mouse_normalize.cpp
    ./cpp/mouse.cpp 
    ./cpp/passive_motion.cpp 
    ./cpp/resize.cpp)
target_include_directories(
    ${PROJECT_NAME} INTERFACE ./hpp)
target_link_libraries(
    ${PROJECT_NAME} object)
