#pragma once
class Point
{
public:
	double AbscissaX, OrdinateY;
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