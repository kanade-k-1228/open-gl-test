cmake_minimum_required(VERSION 3.8)
project(open-gl-test)

# compiler
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${ADDITIONAL_CFLAGS} -g")
set(CMAKE_CXX_STANDARD 17)

#
add_subdirectory(lib/callback)
add_subdirectory(lib/object)
add_subdirectory(lib/instance)

find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)
include_directories(${OPENGL_INCLUDE_DIRS} ${GLUT_INCLUDE_DIRS})
add_executable(main main.cpp)
target_link_libraries(main 
    callback
    object
    ${OPENGL_LIBRARIES} 
    ${GLUT_LIBRARIES})
