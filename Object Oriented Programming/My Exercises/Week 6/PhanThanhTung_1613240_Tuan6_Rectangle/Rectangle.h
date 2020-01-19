#pragma once
#include "Point.h"
class Rectangle
{
public:
	Point A, B, C;
	Rectangle() : A(0, 0), B(0, 0), C(0, 0) {};
	Rectangle(double xA, double yA, double xB, double yB, double xC, double yC) {};
	void Input();
	void Output();
	double dA();
	double dB();
	double dC();
	double GetPerimeter();
	double GetArea();
};