#include "Point.h"
using namespace std;
Point::Point(float x, float y) : x(x), y(y) {}

Point::Point(const Point& autre) : x(autre.x), y(autre.y) {}

void Point::affiche() const {
    cout << "(" << x << ", " << y << ")" << endl;
}

bool Point::comparer(const Point& p1, const Point& p2) {
    return (p1.x == p2.x && p1.y == p2.y);
}

float Point::distance(const Point& p1, const Point& p2) {
    return sqrt((p2.x - p1.x) * (p2.x - p1.x) + (p2.y - p1.y) * (p2.y - p1.y));
}

Point Point::milieu(const Point& p1, const Point& p2) {
    return Point((p1.x + p2.x) / 2, (p1.y + p2.y) / 2);
}
