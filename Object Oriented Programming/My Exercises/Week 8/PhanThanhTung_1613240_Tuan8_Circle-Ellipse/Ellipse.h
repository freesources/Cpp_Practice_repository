#pragma once
#include "Circle.h"
class Ellipse: public Circle
{
protected:
	double SemiMinorAxis;
	double SemiMajorAxis;
public:
	Ellipse();
	~Ellipse();

	double getSemiMinorAxis();
	void setSemiMinorAxis();

	double getSemiMajorAxis();
	void setSemiMajorAxis();

	double getPerimeter();
	double getArea();
};

