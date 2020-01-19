#pragma once
#include <iostream>
#include <math.h>
using namespace std;

class Fraction
{
public:
	long numerator, denominator;	
public:
	Fraction(long num, long den) { InputFraction(num, den); };
	Fraction(long num) { InputFraction(num, 1); };
	~Fraction();
	void InputFraction(long num, long den);
	friend Fraction operator+(Fraction F1, Fraction F2);
	friend Fraction operator-(Fraction F1, Fraction F2);
	friend Fraction operator*(Fraction F1, Fraction F2);
	friend Fraction operator/(Fraction F1, Fraction F2);
	void ReduceAFraction();
};

