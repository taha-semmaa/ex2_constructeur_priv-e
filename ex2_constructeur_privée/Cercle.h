#pragma once
#include "Point.h"
#include <iostream>
#include <string>
#include <math.h>
class Cercle
{
	//attributs
private:
	//Point m_centre=Point::creator();
	double m_rayon;
	Point m_centre;
public:
	Cercle();
	Cercle(const Point&, double);
	Cercle(const Cercle&);
	void m_print()const;
	bool operator==(const Cercle&)const;
	void m_translate(double, double);
	bool m_apartenance(const Point&)const;
	Cercle m_change_rayon(double);
	double m_perimetre()const;
	double m_surface()const;

};

