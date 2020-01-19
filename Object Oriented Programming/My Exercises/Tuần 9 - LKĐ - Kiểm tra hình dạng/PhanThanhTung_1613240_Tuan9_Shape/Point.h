#pragma once
#include <iostream>
using namespace std;

class Point
{
protected:
	double AbscissaX, OrdinateY;
public:
	Point();
	Point(double X, double Y);
	double GetX();
	double GetY();

	void SetX(double x);
	void SetY(double y);

	double Distance(Point P);

	void SetCoordinate();
	void PrintInfor();
};