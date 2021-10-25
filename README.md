# open-gl-test

```bash
mkdir build
cd build
cmake ..
make
./main
```

## 図形の描画

```C
glBegin(/* 図形タイプ */);
// 点群
glVertex??();
glVertex??();
// ...
glEnd();
```

| 定数              | 図形                                    |
| ----------------- | --------------------------------------- |
| GL_POINTS         | 独立の点                                |
| GL_LINES          | 2 頂点ずつ独立した線分                  |
| GL_LINE_STRIP     | 連結した線分                            |
| GL_LINE_LOOP      | 閉じた折れ線                            |
| GL_TRIANGLES      | 3 頂点ずつ独立した三角形                |
| GL_TRIANGLE_STRIP | 連結した三角形                          |
| GL_TRIANGLE_FAN   | 最初の頂点をピボットとし 2 頂点を三角形 |
| GL_QUADS          | 4 頂点ずつ四角形                        |
| GL_QUAD_STRIP     | 連結した四角形                          |
| GL_POLYGON        | 凸ポリゴン                              |

### 便利コマンド

- glRect : 方形

## 送信

- glFlush();
  - コマンドを送信
- glFinish();
  - コマンドを送信し実行完了まで待つ

## 内部状態

## 座標系
