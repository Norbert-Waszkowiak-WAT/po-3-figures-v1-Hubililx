#include "point.h"
#include <sstream>
#include <iomanip>
#include "line.h"
using namespace std;

Line::Line(Point a, Point b): a(a), b(b){}

Line::Line(Line &other): a(other.a), b(other.b){};

bool Line::equals(Line &other){
    return a.equals(other.a) && b.equals(other.b);
}
void Line::flip(){
    a.flip();
    b.flip();
}
string Line::toString(){
    return "Line(" + a.toString() + ", " + b.toString() + ")";
}
void Line::move (double x, double y){
    a.move(x, y);
    b.move(x, y);
}

