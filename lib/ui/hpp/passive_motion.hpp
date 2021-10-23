#pragma once
#include <iostream>
#include <logic.hpp>

void passive_motion(int, int);

void passive_motion(int x, int y) {
    set_current_point(x, y);
    std::cout << " [" << x << "," << y << "]" << std::endl;
}
