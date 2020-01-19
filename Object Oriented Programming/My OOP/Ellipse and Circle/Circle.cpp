#include "Circle.h"
#include <math.h>
#include <iostream>
using namespace std;
const double PI = 3.141592653589793238463;


Circle::Circle()
{
}


Circle::~Circle()
{
}

double Circle::getRadius()
{
	return fRadius;
}

void Circle::setRadius()
{
	cout << "Input Radius: ";
	cin >> fRadius;
}

double Circle::getPerimeter()
{
	return (fRadius*2*PI);
}

double Circle::getArea()
{
	return (PI*pow(fRadius,2));
}
