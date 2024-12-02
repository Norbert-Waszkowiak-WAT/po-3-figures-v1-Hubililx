#ifndef LINE_H
#define LINE_H
#include <string>
#include "point.h"
using namespace std;

class Line{
private:
    Point a;
    Point b;
public:
    Line (Point a, Point b);
    Line(Line &other);
    bool equals(Line &other);
    void flip();
    void move(double x, double y);
    string toString();


};
#endif