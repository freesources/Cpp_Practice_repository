#pragma once
#include "Point.h"
class Parallelogram :public Point
{
public:
	Point A, B, C, D;
	Parallelogram() : A(0, 0), B(0, 0), C(0, 0), D(0, 0) {};
	Parallelogram(double xA, double yA, double xB, double yB, double xC, double yC, double xD, double yD) {};

	void Input();
	void CheckParallelogram();
};

