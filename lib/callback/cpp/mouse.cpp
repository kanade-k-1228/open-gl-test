#include "../hpp/mouse.hpp"

void mouse(int button, int state, int x, int y) {
  mouse_normalize(&x, &y);
  std::cout << "mouse\t(" << x << "," << y << ")" << std::endl;

  Instance::lines.set_current_point(x, y);
  if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
    Instance::lines.add_point();
    Instance::lines.print();
    Instance::lines.draw();
  } else if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN) {
    Instance::lines.close();
    Instance::lines.print();
    Instance::lines.draw();
  }
}
