
#pragma once
#include <iostream>
#include <string>
#include <math.h>
using namespace std;
class Point
{
	//atributs
private:
	double m_x;
	double m_y;
	Point();
	Point(double, double);
	
public:
	Point(const Point&);
	double m_distance(const Point&)const;
	bool operator==(const Point&)const;
	string m_print()const;
	void m_translate(double, double);
	static Point creator();
	static Point creator(double, double);


};

