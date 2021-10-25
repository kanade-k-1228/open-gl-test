#include "../hpp/line.hpp"

Point Line::current_point;
std::vector<Point> Line::polygon_points(0);
bool Line::closed = false;

void Line::set_current_point(int x, int y) {
  current_point = {x, y};
}

void Line::add_point() {
  if(closed) {
    polygon_points.clear();
  }
  closed = false;
  polygon_points.push_back(current_point);
}

void Line::close() {
  closed = true;
}

void Line::print() {
  std::cout << "line\t[";
  for(auto point : polygon_points) {
    std::cout << "(" << point.x << "," << point.y << "), ";
  }
  std::cout << "\b\b]" << std::endl;
}

void Line::draw() {
  if(closed) {
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);
    for(auto point : polygon_points) {
      glVertex2d((double)point.x, (double)point.y);
    }
    glEnd();
    glFlush();
  } else {
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_LINE_LOOP);
    for(auto point : polygon_points) {
      glVertex2d((double)point.x, (double)point.y);
    }
    glVertex2d((double)current_point.x, (double)current_point.y);
    glEnd();
    glFlush();
  }
}
