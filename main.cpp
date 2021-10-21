#include <GL/glut.h>
#include <iostream>
#include <initialize.hpp>
#include <display.hpp>
#include <resize.hpp>
#include <mouse.hpp>
#include <motion.hpp>
#include <keyboard.hpp>

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(800, 600);
    glutInitWindowPosition(100, 100);
    glutInitDisplayMode(GLUT_RGBA);
    glutCreateWindow("OpenGL Test");
    glutDisplayFunc(display);
    glutReshapeFunc(resize);
    glutMouseFunc(mouse);
    glutMotionFunc(motion);
    glutKeyboardFunc(keyboard);
    std::cout << "X Window Config Done" << std::endl;
    initialize();
    glutMainLoop();
    return 0;
}
