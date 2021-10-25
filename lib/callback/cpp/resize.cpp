#include "../hpp/resize.hpp"

void resize(const GLsizei width, const GLsizei height) {
  std::cout << "resize\t[" << width << "," << height << "]" << std::endl;
  glViewport(0, 0, width, height);                                             // ウィンドウ全体をビューポートにする
  glMatrixMode(GL_PROJECTION);                                                 // 投影変換
  glLoadIdentity();                                                            // 変換行列の初期化
  glOrtho(-width / 2.0, width / 2.0, -height / 2.0, height / 2.0, -1.0, 1.0);  // 正投影
}
