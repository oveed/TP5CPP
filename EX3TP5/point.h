#ifndef POINT_H
#define POINT_H
#include <iostream>
#include <cmath>

class Point {
private:
    float x, y;

public:
    Point(float x = 0, float y = 0);
    Point(const Point& autre);
    void affiche() const;
    static bool comparer(const Point& p1, const Point& p2);
    static float distance(const Point& p1, const Point& p2);
    static Point milieu(const Point& p1, const Point& p2);
    float getX() const { return x; }
    float getY() const { return y; }
};

#endif
