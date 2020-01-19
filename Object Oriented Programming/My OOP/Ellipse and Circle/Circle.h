#pragma once
class Circle
{
protected:
	double fRadius;
public:
	Circle();
	~Circle();

	double getRadius();
	void setRadius();

	double getPerimeter();
	double getArea();
};

