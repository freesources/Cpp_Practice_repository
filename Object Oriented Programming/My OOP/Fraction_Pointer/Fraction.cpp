#include "Fraction.h"

Fraction::~Fraction()
{
}

void Fraction::InputFraction(long num, long den)
{
	numerator = num;
	denominator = den;
}

void Fraction::ReduceAFraction()
{
		long a = numerator;
		long b = denominator;
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
		cout << " -> Result: " << numerator << "/" << denominator << endl;
}

Fraction operator+(Fraction F1, Fraction F2)
{
	return Fraction((F1.numerator*F2.denominator)+(F2.numerator*F1.denominator),(F1.denominator*F2.denominator));
}

Fraction operator-(Fraction F1, Fraction F2)
{
	return Fraction((F1.numerator*F2.denominator) - (F2.numerator*F1.denominator), (F1.denominator*F2.denominator));
}

Fraction operator*(Fraction F1, Fraction F2)
{
	return Fraction((F1.numerator*F2.numerator),(F1.denominator*F2.denominator));
}

Fraction operator/(Fraction F1, Fraction F2)
{
	return Fraction((F1.numerator*F2.denominator),(F1.denominator*F2.numerator));
}
