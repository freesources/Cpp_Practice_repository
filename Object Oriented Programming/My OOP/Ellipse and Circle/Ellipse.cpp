#include "Ellipse.h"
#include <iostream>
#include <math.h>
using namespace std;
const double PI = 3.141592653589793238463;

Ellipse::Ellipse()
{
}


Ellipse::~Ellipse()
{
}

double Ellipse::getSemiMinorAxis()
{
	return SemiMinorAxis;
}

void Ellipse::setSemiMinorAxis()
{
	cout << "Input Semi-minor-axis of ellipse: ";
	cin >> SemiMinorAxis;
}

double Ellipse::getSemiMajorAxis()
{
	return SemiMajorAxis;
}

void Ellipse::setSemiMajorAxis()
{
	cout << "Input Semi-major-axis of ellipse: ";
	cin >> SemiMajorAxis;
}

double Ellipse::getPerimeter()
{
	return (2*PI*sqrt(0.5*(pow(SemiMajorAxis,2)+pow(SemiMinorAxis,2))));
}

double Ellipse::getArea()
{
	return (PI*SemiMajorAxis*SemiMinorAxis);
}
