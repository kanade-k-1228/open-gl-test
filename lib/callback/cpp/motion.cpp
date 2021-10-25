#include "../hpp/motion.hpp"

void motion(int x, int y) {
  mouse_normalize(&x, &y);
  std::cout << "mouse\t(" << x << "," << y << ")" << std::endl;

  Line::set_current_point(x, y);
  Line::draw();
}
