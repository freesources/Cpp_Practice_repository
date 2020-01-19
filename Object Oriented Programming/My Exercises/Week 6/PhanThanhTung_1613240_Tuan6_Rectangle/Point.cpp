#include "Point.h"
#include <iostream>
#include <math.h>
using namespace std;

Point::Point()
{
	AbscissaX = 0;
	OrdinateY = 0;
}

Point::Point(double X, double Y)
{
	AbscissaX = X;
	OrdinateY = Y;
}

void Point::SetX(double x)
{
	AbscissaX = x;
}

void Point::SetY(double y)
{
	OrdinateY = y;
}

double Point::Distance(Point P)
{
	return sqrt(pow((AbscissaX - P.AbscissaX), 2) + pow((OrdinateY - P.OrdinateY), 2));
}


double Point::GetX()
{
	return AbscissaX;
}

double Point::GetY()
{
	return OrdinateY;
}

void Point::SetCoordinate()
{
	cout << "Input Abscissa X: ";
	cin >> AbscissaX;
	cout << "Input Ordinate Y: ";
	cin >> OrdinateY;
}

void Point::PrintInfor()
{
	cout << "(" << AbscissaX << ";" << OrdinateY << ")";
}
