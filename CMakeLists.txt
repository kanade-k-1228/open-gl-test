cmake_minimum_required(VERSION 3.8)
project(open-gl-test CXX)

add_subdirectory(lib)
find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)
include_directories(${OPENGL_INCLUDE_DIRS} ${GLUT_INCLUDE_DIRS})
add_executable(main main.cpp)
target_link_libraries(main 
    line
    callback
    ${OPENGL_LIBRARIES} 
    ${GLUT_LIBRARIES})
