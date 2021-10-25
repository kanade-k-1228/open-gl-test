#include "../hpp/resize.hpp"

void resize(const int width, const int height) {
  std::cout << "resize\t[" << width << "," << height << "]" << std::endl;
  glViewport(0, 0, width, height);                                                     // ウィンドウ全体をビューポートにする
  glLoadIdentity();                                                                    // 変換行列の初期化
  glOrtho(-width / 200.0, width / 200.0, -height / 200.0, height / 200.0, -1.0, 1.0);  // 正投影
}
