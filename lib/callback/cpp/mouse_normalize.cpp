#include "../hpp/mouse_normalize.hpp"

void mouse_normalize(int* x, int* y) {
  *x = 2 * (*x) - glutGet(GLUT_WINDOW_WIDTH);
  *y = -2 * (*y) + glutGet(GLUT_WINDOW_HEIGHT);
}
