#include "Fraction.h"
#include <iostream>
using namespace std;

Fraction::Fraction()
{
}


Fraction::~Fraction()
{
}

void Fraction::InputFraction()
{
	do
	{
		cout << "Input numerator: ";
		cin >> numerator;
		cout << "Input denominator: ";
		cin >> denominator;
	} while (denominator == 0);
}

void Fraction::ReduceAFraction()
{
	int a = numerator;
	int b = denominator;
	if (a < 0)
	{
		a = abs(a);
	}
	while (a != b)
	{
		a > b ? a -= b : b -= a;
	}
	numerator = numerator / a;
	denominator = denominator / a;
	cout << numerator << "/" << denominator << endl;
}
void Fraction::Compare(Fraction F1)
{
	float a, b;
	a = ((float)numerator/(float)denominator);
	b = ((float)F1.numerator/(float)F1.denominator);
	if (a > b)
		cout << "1st fraction (" << numerator << "/" << denominator << ") is bigger than 2nd fraction(" << F1.numerator << "/" << F1.denominator << ") !" << endl;
	else
		cout << "2nd fraction (" << F1.numerator << "/" << F1.denominator << ") is bigger than the 1st fraction (" << numerator << "/" << denominator << ") !" << endl;
}
void Fraction::ReduceToTheSameDenominator(Fraction F1)
{
	int SameDenominator;
	SameDenominator = (denominator)*(F1.denominator);
	numerator = numerator*F1.denominator;
	denominator = SameDenominator;
}
void Fraction::SUM(Fraction F1, Fraction F2)
{
	numerator = (F1.numerator + F2.numerator);
	denominator = (F1.denominator);
}
void Fraction::SUBTRACT(Fraction F1, Fraction F2)
{
	numerator = F1.numerator - F2.numerator;
	denominator = F1.denominator;
}
void Fraction::MULTIPLY(Fraction F1, Fraction F2)
{
	numerator = F1.numerator * F2.numerator;
	denominator = F1.denominator * F2.denominator;
}
void Fraction::DIVIDE(Fraction F1, Fraction F2)
{
	numerator = F1.numerator*F2.denominator;
	denominator = F1.denominator*F2.numerator;
}
