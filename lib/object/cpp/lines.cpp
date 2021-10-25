#include "../hpp/lines.hpp"

Lines::Lines() {
  std::vector<Line> lines(1, Line());
}

void Lines::set_current_point(int x, int y) {
  if(lines.empty() || lines.back().closed) {
    Line* new_line = new Line();
    lines.push_back(*new_line);
  }
  lines.back().set_current_point(x, y);
}

void Lines::add_point() {
  if(!lines.empty()) lines.back().add_point();
}

void Lines::close() {
  if(!lines.empty()) {
    lines.back().close();
    Line* new_line = new Line();
    lines.push_back(*new_line);
  }
}

void Lines::print() {
  std::cout << "lines-cnt: " << lines.size() << std::endl;
  for(auto line : lines) line.print();
}

void Lines::draw() {
  glClear(GL_COLOR_BUFFER_BIT);
  for(auto line : lines) line.draw();
  glFlush();
}