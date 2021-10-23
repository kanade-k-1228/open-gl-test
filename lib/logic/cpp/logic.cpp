#include "../hpp/logic.hpp"

Point current_point;
std::vector<Point> polygon_points(0);
bool closed = false;

void set_current_point(int x, int y) {
    current_point = { x, y };
}

void add_polygon_point() {
    if (closed) polygon_points.clear();
    closed = false;
    polygon_points.push_back(current_point);
}

void close_polygon() {
    closed = true;
}

void print_points() {
    for (auto point : polygon_points) {
        std::cout << "(" << point.x << "," << point.y << ")";
    }
    std::cout << std::endl;
}
