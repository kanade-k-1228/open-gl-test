#include "../hpp/mouse_normalize.hpp"

void mouse_normalize(int* x, int* y) {
  *x = *x - glutGet(GLUT_WINDOW_WIDTH) / 2;
  *y = -*y + glutGet(GLUT_WINDOW_HEIGHT) / 2;
}
