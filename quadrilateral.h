#ifndef QUADRILATERAL_H
#define QUADRILATERAL_H
#include <string>
#include "point.h"
#include "line.h"
#include "triangle.h"
using namespace std;

class Quadrilateral{
private:
    Point a;
    Point b;
    Point c;
    Point d;
public:
Quadrilateral(Point a, Point b, Point c, Point d);
Quadrilateral(Quadrilateral &other);
bool equals(Quadrilateral &other);
void flip();
void move(double x, double y);
double getSurface();
string toString();
};
#endif