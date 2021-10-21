#include <iostream>

void mouse(int, int, int, int);

void mouse(int button, int state, int x, int y) {
    switch (button) {
    case GLUT_LEFT_BUTTON:
        std::cout << "left" << std::endl;
        break;
    case GLUT_MIDDLE_BUTTON:
        std::cout << "middle" << std::endl;
        break;
    case GLUT_RIGHT_BUTTON:
        std::cout << "right" << std::endl;
        break;
    default:
        break;
    }
    std::cout << x << "\t" << y << std::endl;
}