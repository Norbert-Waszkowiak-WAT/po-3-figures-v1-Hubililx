#include "point.h"
#include <sstream>
#include <iomanip>
using namespace std;

Point::Point(double x, double y): x(x), y(y){}
Point::Point(Point &other): x(other.x), y(other.y){};
double Point::getX(){
    return x;
}

double Point::getY() {
    return y;
}

bool Point:: equals(Point &other){
    return other.x == x && other.y == y;
}

string Point::toString(){
    ostringstream oss;
    oss << fixed << setprecision(1);
    oss << "Point(" << x << ", " << y << ")";
    return oss.str();
}
void Point::flip(){
    x = -x;
    y = -y;
}

void Point::move (double a, double b){
    x = x+a;
    y= y+b;
}