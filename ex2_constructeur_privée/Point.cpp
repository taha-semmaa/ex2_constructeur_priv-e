#include "Point.h"
#include <iostream>
#include <string>
#include <math.h>
using namespace std;
Point::Point():m_x(0.0),m_y(0.0)
{
    //this->m_x = 0.0;
   // this->m_y = 0.0;
}

Point::Point(double x, double y)
{
    this->m_x = x;
    this->m_y = y;
}

Point::Point(const Point& P)
{
    this->m_x = P.m_x;
    this->m_y = P.m_y;
}

double Point::m_distance(const Point& P) const
{
    return sqrt(pow((P.m_x - this->m_x), 2) + pow((P.m_y - this->m_y), 2));
}

bool Point::operator==(const Point& P) const
{
    if (this->m_x == P.m_x && this->m_y == P.m_y)
        return true;
    return false;
}

string Point::m_print() const
{
    string s;
    s = "(" + to_string(this->m_x) + "," + to_string(this->m_y) + ")";
    return s;
}

void Point::m_translate(double dx, double dy)
{
    this->m_x += dx;
    this->m_y += dy;
}

Point Point::creator()
{
    Point P;
    return P;
}

Point Point::creator(double x, double y)
{
    Point P = Point(x, y);
    return P;
}
