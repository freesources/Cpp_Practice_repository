#pragma once
class Coordinate
{
public:
	double AbscissaX, OrdinateY;
	Coordinate();
	Coordinate(const Coordinate &D);
	Coordinate(double xx, double yy);
	double GetX();
	double GetY();
	void SetX(double x);
	void SetY(double y);
	void SetCoordinate();
	void PrintInfor();
	void Move(double dx, double dy);
	double Distance(Coordinate P);
};