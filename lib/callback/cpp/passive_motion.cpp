#include "../hpp/passive_motion.hpp"

void passive_motion(const int x, const int y) {
    Line::set_current_point(x, y);
    std::cout << " [" << x << "," << y << "]" << std::endl;
}
