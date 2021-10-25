#pragma once
#include "line.hpp"

class Lines {
  std::vector<Line> lines;

public:
  Lines();
  void set_current_point(int, int);
  void add_point();
  void close();
  void print();
  void draw();
};
