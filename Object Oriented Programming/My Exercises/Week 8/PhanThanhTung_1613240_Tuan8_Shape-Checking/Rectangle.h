#pragma once
#include "Square.h"
class Rectangle:public Square
{
public:
	Point A, B, C, D;
	Rectangle() : A(0, 0), B(0, 0), C(0, 0), D(0, 0) {};
	Rectangle(double xA, double yA, double xB, double yB, double xC, double yC, double xD, double yD) {};

	void Input();
	void CheckRectangle();
};

