#include "../hpp/resize.hpp"

void resize(const int width, const int height) {
  std::cout << "resize\t[" << width << "," << height << "]" << std::endl;
  // ウィンドウ全体をビューポートにする
  glViewport(0, 0, width, height);
  // 変換行列の初期化
  glLoadIdentity();
  // スクリーン上の表示領域をビューポートの大きさに比例させる
  glOrtho(-width / 200.0, width / 200.0, -height / 200.0, height / 200.0, -1.0,
          1.0);
}
