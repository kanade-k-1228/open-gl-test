#include "../hpp/mouse.hpp"

void mouse(const int button, const int state, const int x, const int y) {
    Line::set_current_point(x, y);
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
        Line::add_point();
        Line::print();
        Line::draw();
    }
    else if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN) {
        Line::add_point();
        Line::close();
        Line::print();
        Line::draw();
    }
}