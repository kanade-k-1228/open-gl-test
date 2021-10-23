#pragma once
#include <vector>
#include <iostream>
#include "point.hpp"

namespace Line {
    extern Point current_point;
    extern std::vector<struct Point> polygon_points;
    extern bool closed;

    void set_current_point(int, int);
    void add_polygon_point();
    void close_polygon();
    void print_points();
}