#include "../hpp/mouse.hpp"

void mouse(int button, int state, int x, int y) {
    set_current_point(x, y);
    if (button == GLUT_LEFT_BUTTON) add_polygon_point();
    else if (button == GLUT_RIGHT_BUTTON) close_polygon();
}