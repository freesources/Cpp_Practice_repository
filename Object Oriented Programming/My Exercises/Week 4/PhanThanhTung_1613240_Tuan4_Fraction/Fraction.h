#pragma once
class Fraction
{
public:
	int numerator;
	int denominator;
public:
	Fraction();
	~Fraction();
	void InputFraction();
	void ReduceAFraction();
	void Compare(Fraction F);
	void ReduceToTheSameDenominator(Fraction F);
	void SUM(Fraction F1, Fraction F2);
	void SUBTRACT(Fraction F1, Fraction F2);
	void MULTIPLY(Fraction F1, Fraction F2);
	void DIVIDE(Fraction F1, Fraction F2);
};

