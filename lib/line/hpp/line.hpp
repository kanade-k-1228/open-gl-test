#pragma once
#include "point.hpp"
#include <GL/glut.h>
#include <iostream>
#include <vector>

namespace Line {
extern Point current_point;
extern std::vector<struct Point> polygon_points;
extern bool closed;

void set_current_point(int, int);
void add_point();
void close();
void print();
void draw();
} // namespace Line