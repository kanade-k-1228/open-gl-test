#include "../hpp/mouse.hpp"

void mouse(const int button, const int state, const int x, const int y) {
    Line::set_current_point(x, y);
    if (button == GLUT_LEFT_BUTTON) {
        Line::add_polygon_point();
    }
    else if (button == GLUT_RIGHT_BUTTON) {
        Line::close_polygon();
        Line::print_points();
    }
}