cmake_minimum_required(VERSION 3.8)
project(instance)
add_library(
    ${PROJECT_NAME} STATIC 
    ./cpp/instance.cpp)
target_include_directories(
    ${PROJECT_NAME} INTERFACE 
    ./hpp)
target_link_libraries(
    ${PROJECT_NAME} object)
