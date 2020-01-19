#include "Fraction.h"
using namespace std;

int main()
{
	Fraction F1(36), F2(12, 13), F3(1,3), Result(0,0);
	cout << "* Fraction 1: " << F1.numerator << "/" << F1.denominator << endl;
	cout << "* Fraction 2: " << F2.numerator << "/" << F2.denominator << endl;
	cout << "* Fraction 3: " << F3.numerator << "/" << F3.denominator << endl;

	cout << "\n>>_____ CALCULATE (Fraction 1 & 2) _____<<" << endl << endl;
	cout << " - Sum: " << F1.numerator << "/" << F1.denominator << " + " << F2.numerator << "/" << F2.denominator << " = " << endl;
	Result = F1 + F2;
	Result.ReduceAFraction();
	cout << endl;

	cout << " - Subtract: " << F1.numerator << "/" << F1.denominator << " - " << F2.numerator << "/" << F2.denominator << " = " << endl;;
	Result = F1 - F2;
	Result.ReduceAFraction();
	cout << endl;

	cout << " - Multiply: " << F1.numerator << "/" << F1.denominator << " * " << F2.numerator << "/" << F2.denominator << " = " << endl;;
	Result = F1 * F2;
	Result.ReduceAFraction();
	cout << endl;

	cout << " - Divide: " << F1.numerator << "/" << F1.denominator << " divide " << F2.numerator << "/" << F2.denominator << " = " << endl;;
	Result = F1 / F2;
	Result.ReduceAFraction();
	cout << endl;

	cout << "\n>>_____ CALCULATE (Fraction 1, 2 & 3) _____<<" << endl << endl;
	cout << " - Sum: " << F1.numerator << "/" << F1.denominator << " + " << F2.numerator << "/" << F2.denominator << " + " << F3.numerator << "/" << F3.denominator << " = " << endl;
	Result = F1 + F2 + F3;
	Result.ReduceAFraction();
	cout << endl;

	cout << " - Subtract: " << F1.numerator << "/" << F1.denominator << " - " << F2.numerator << "/" << F2.denominator << " - " << F3.numerator << "/" << F3.denominator << " = " << endl;;
	Result = F1 - F2 - F3;
	Result.ReduceAFraction();
	cout << endl;

	cout << " - Multiply: " << F1.numerator << "/" << F1.denominator << " * " << F2.numerator << "/" << F2.denominator << " * " << F3.numerator << "/" << F3.denominator << " = " << endl;;
	Result = F1 * F2 * F3;
	Result.ReduceAFraction();
	cout << endl;

	cout << " - Divide: " << F1.numerator << "/" << F1.denominator << " divide " << F2.numerator << "/" << F2.denominator << " divide " << F3.numerator << "/" << F3.denominator << " = " << endl;;
	Result = F1 / F2 / F3;
	Result.ReduceAFraction();
	cout << endl;

	system("pause");
}