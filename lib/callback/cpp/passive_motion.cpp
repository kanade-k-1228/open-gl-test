#include "../hpp/passive_motion.hpp"

void passive_motion(int x, int y) {
  mouse_normalize(&x, &y);
  std::cout << "mouse\t(" << x << "," << y << ")" << std::endl;

  Instance::lines.set_current_point(x, y);
  Instance::lines.draw();
}
