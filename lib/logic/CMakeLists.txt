cmake_minimum_required(VERSION 3.8)
project(logic)
add_library(logic STATIC ./cpp/logic.cpp)
target_include_directories(logic INTERFACE ./hpp)