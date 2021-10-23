#pragma once
#include <iostream>

void motion(int, int);

void motion(int x, int y) {
    std::cout << "[[" << x << "," << y << "]]" << std::endl;
}
