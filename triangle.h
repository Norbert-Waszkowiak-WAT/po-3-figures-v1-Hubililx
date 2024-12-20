#ifndef TRIANGLE_H
#define TRIANGLE_H
#include <string>
#include "point.h"
#include "line.h"
using namespace std;

class Triangle{
private:
    Point a;
    Point b;
    Point c;
public:
    Triangle(Point a, Point b, Point c);
    Triangle(const Triangle &other);
    bool equals(Triangle &other);
    void flip();
    void move(double x, double y);
    double getSurface();
    string toString();
};
#endif
