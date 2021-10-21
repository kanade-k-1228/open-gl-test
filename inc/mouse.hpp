#include <iostream>

void mouse(int, int, int, int);

void mouse(int button, int state, int x, int y) {
    switch (button) {
    case GLUT_LEFT_BUTTON:
        std::cout << "    <<<" << std::endl;
        break;
    case GLUT_MIDDLE_BUTTON:
        std::cout << "    |||" << std::endl;
        break;
    case GLUT_RIGHT_BUTTON:
        std::cout << "    >>>" << std::endl;
        break;
    default:
        break;
    }
}