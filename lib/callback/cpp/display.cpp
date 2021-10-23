#include "../hpp/display.hpp"

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    
    glBegin(GL_LINE_LOOP);
    glVertex2d(-0.9, -0.9);
    glVertex2d( 0.9, -0.9);
    glVertex2d( 0.9,  0.9);
    glVertex2d(-0.9,  0.9);
    glEnd();
    
    glFlush();
}
