#pragma once
#include "Point.h"
class Shape4Point :public Point
{
protected:
	Point A, B, C, D;
public:
	Shape4Point() : A(0, 0), B(0, 0), C(0, 0), D(0, 0) {};
	Shape4Point(double xA, double yA, double xB, double yB, double xC, double yC, double xD, double yD) {};
	virtual void InputShape();
	virtual void CheckingShape();
};