#include "../hpp/line.hpp"

Line::Line() : closed_(false), closed(&closed_) {
  Point current_point = {0, 0};
  std::vector<Point> polygon_points(0);
}

void Line::set_current_point(int x, int y) {
  current_point = {x, y};
}

void Line::add_point() {
  if(closed_) polygon_points.clear();
  closed_ = false;
  polygon_points.push_back(current_point);
}

void Line::close() {
  closed_ = true;
}

void Line::print() {
  std::cout << "line\t[";
  for(auto point : polygon_points) std::cout << "(" << point.x << "," << point.y << "), ";
  std::cout << "\b\b]" << std::endl;
}

void Line::draw() {
  glBegin(GL_LINE_LOOP);
  for(auto point : polygon_points) glVertex2d((double)point.x, (double)point.y);
  if(!closed_) glVertex2d((double)current_point.x, (double)current_point.y);
  glEnd();
}
