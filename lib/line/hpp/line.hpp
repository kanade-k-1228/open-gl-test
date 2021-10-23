#pragma once
#include <vector>
#include <iostream>
#include <GL/glut.h>
#include "point.hpp"

namespace Line {
    extern Point current_point;
    extern std::vector<struct Point> polygon_points;
    extern bool closed;

    void set_current_point(int, int);
    void add_point();
    void close();
    void print();
    void draw();
}