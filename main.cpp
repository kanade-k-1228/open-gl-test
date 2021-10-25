#include <GL/glut.h>
#include <display.hpp>
#include <initialize.hpp>
#include <iostream>
#include <keyboard.hpp>
#include <motion.hpp>
#include <mouse.hpp>
#include <passive_motion.hpp>
#include <resize.hpp>

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
  glutPassiveMotionFunc(passive_motion);
  glutKeyboardFunc(keyboard);

  std::cout << "X Window Config Done" << std::endl;

  initialize();
  glutMainLoop();
  return 0;
}
