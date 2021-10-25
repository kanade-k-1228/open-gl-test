#pragma once
#include "point.hpp"
#include <GL/glut.h>
#include <iostream>
#include <vector>

class Line {
  struct Point current_point;
  std::vector<struct Point> polygon_points;
  bool closed_;

public:
  Line();
  void set_current_point(int, int);
  void add_point();
  void close();
  const bool& closed;
  void print();
  void draw();
};
