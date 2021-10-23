cmake_minimum_required(VERSION 3.8)
project(ui)

add_library(ui STATIC 
    ./cpp/display.cpp 
    ./cpp/initialize.cpp
    ./cpp/keyboard.cpp
    ./cpp/motion.cpp
    ./cpp/mouse.cpp 
    ./cpp/passive_motion.cpp 
    ./cpp/resize.cpp)

target_include_directories(ui INTERFACE ./hpp)

target_link_libraries(ui logic)
