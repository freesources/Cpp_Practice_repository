#pragma once
#include "Point.h"
class Trapezoid :public Point
{
public:
	Point A, B, C, D;
	Trapezoid() : A(0, 0), B(0, 0), C(0, 0), D(0, 0) {};
	Trapezoid(double xA, double yA, double xB, double yB, double xC, double yC, double xD, double yD) {};

	void Input();
	void CheckTrapezoid();
};

