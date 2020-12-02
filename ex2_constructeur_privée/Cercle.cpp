#include "Cercle.h"
#include <iostream>
#include <string>
#include <math.h>
const double P = 3.14;
Cercle::Cercle():m_centre(Point::creator())
{
	//this->m_centre = Point::creator();
	this->m_rayon = 0.0;
}

Cercle::Cercle(const Point& P, double rayon):m_centre(P)
{
	//this->m_centre = P;
	this->m_rayon = rayon;
}

Cercle::Cercle(const Cercle& C):m_centre(C.m_centre)
{
	//this->m_centre = C.m_centre;
	this->m_rayon = C.m_rayon;
}

void Cercle::m_print() const
{
	cout << "(" + this->m_centre.m_print() + "," + to_string(this->m_rayon) + ")" << endl;
}

bool Cercle::operator==(const Cercle& P) const
{
	if (this->m_rayon == P.m_rayon && this->m_centre == P.m_centre)
		return true;
	else return false;
}

void Cercle::m_translate(double dx, double dy)
{
	this->m_centre.m_translate(dx, dy);
}

bool Cercle::m_apartenance(const Point& P) const
{
	if (this->m_centre.m_distance(P) <= this->m_rayon)
		return true;
	return false;
}

Cercle Cercle::m_change_rayon(double rayon)
{
	this->m_rayon = rayon;
	return *this;
}

double Cercle::m_perimetre() const
{
	return 2 * P * this->m_rayon;
}

double Cercle::m_surface() const
{
	return P * pow(this->m_rayon, 2);
}

