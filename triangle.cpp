#include <sstream>
#include <iomanip>
#include "point.h"
#include "line.h"
#include "triangle.h"
#include <cmath>
using namespace std;

Triangle::Triangle(Point a, Point b, Point c): a(a), b(b), c(c){}

Triangle::Triangle(const Triangle &other): a(other.a), b(other.b), c(other.c){};

bool Triangle::equals(Triangle &other){
    return a.equals(other.a) && b.equals(other.b) && c.equals(other.c);
}
void Triangle::flip(){
    a.flip();
    b.flip();
    c.flip();
}
string Triangle::toString(){
    return "Triangle(" + a.toString() + ", " + b.toString()+ ", " + c.toString() + ")";
}
void Triangle::move (double x, double y){
    a.move(x, y);
    b.move(x, y);
    c.move(x, y);
};




double Triangle::getSurface(){
double p, ab, bc, ac, pole;
ab = sqrt(pow(a.getX() - b.getX(), 2.0) + pow(a.getY() + b.getY(), 2.0));
bc = sqrt(pow(b.getX() - c.getX(), 2.0) + pow(b.getY() + c.getY(), 2.0));
ac = sqrt(pow(a.getX() - c.getX(), 2.0) + pow(a.getY() + c.getY(), 2.0));
p =0.5*(ab+bc+ac);
pole = sqrt(p*(p-ab)*(p-bc)*(p-ac));
return pole;
};

