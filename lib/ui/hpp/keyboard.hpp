#pragma once
#include <iostream>

void keyboard(unsigned char, int, int);

void keyboard(unsigned char key, int x, int y) {
    std::cout << "key\t" << key << std::endl;
}