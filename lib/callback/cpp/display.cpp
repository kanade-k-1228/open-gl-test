#include "../hpp/display.hpp"

void display() {
  glClearColor(0.1, 0.1, 0.1, 0.0);  // バッファクリアカラーを指定
  glClear(GL_COLOR_BUFFER_BIT);      // バッファクリア
  glFlush();
}
