#include "../hpp/display.hpp"

void display(void) {
    print_points();
    glClear(GL_COLOR_BUFFER_BIT);
    glFlush();
}
