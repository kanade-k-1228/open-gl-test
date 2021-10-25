#include "../hpp/mouse.hpp"

void mouse(int button, int state, int x, int y) {
  mouse_normalize(&x, &y);
  std::cout << "mouse\t(" << x << "," << y << ")" << std::endl;

  Line::set_current_point(x, y);
  if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
    Line::add_point();
    Line::print();
    Line::draw();
  } else if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN) {
    Line::close();
    Line::print();
    Line::draw();
  }
}
