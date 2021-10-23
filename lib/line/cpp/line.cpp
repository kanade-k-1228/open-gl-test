#include "../hpp/line.hpp"

Point Line::current_point;
std::vector<Point> Line::polygon_points(0);
bool Line::closed = false;

void Line::set_current_point(int x, int y) {
    current_point = { x, y };
}

void Line::add_polygon_point() {
    if (closed) {
        polygon_points.clear();
    }
    closed = false;
    polygon_points.push_back(current_point);
}

void Line::close_polygon() {
    closed = true;
}

void Line::print_points() {
    for (auto point : polygon_points) {
        std::cout << "(" << point.x << "," << point.y << ")";
    }
    std::cout << std::endl;
}
