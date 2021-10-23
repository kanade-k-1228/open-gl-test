#include "../hpp/resize.hpp"

void resize(const int w, const int h) {
    std::cout << "resize\t[" << w << "," << h << "]" << std::endl;
    /* ウィンドウ全体をビューポートにする */
    glViewport(0, 0, w, h);
    /* 変換行列の初期化 */
    glLoadIdentity();
    /* スクリーン上の表示領域をビューポートの大きさに比例させる */
    glOrtho(-w / 200.0, w / 200.0, -h / 200.0, h / 200.0, -1.0, 1.0);
}
