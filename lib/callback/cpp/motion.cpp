#include "../hpp/motion.hpp"

void motion(int x, int y) {
  mouse_normalize(&x, &y);
  std::cout << "mouse\t(" << x << "," << y << ")" << std::endl;

  Instance::lines.set_current_point(x, y);
  Instance::lines.draw();
}
