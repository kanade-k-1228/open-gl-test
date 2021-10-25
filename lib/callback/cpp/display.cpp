#include "../hpp/display.hpp"

void display() {
  std::cout << "display" << std::endl;

  Instance::lines.draw();
}
