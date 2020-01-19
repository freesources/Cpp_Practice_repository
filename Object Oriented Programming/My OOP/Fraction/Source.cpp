#include <iostream>
#include <math.h>
#include "Fraction.h"
#define MAX 5
using namespace std;
int main()
{
	Fraction F[MAX],K,TEMP;
	int i, n = 1;
	cout << "a) Reduce a fraction: " << endl;
	for (i = 0; i <= n; i++)
	{
		F[i].InputFraction();
		cout << "The fraction after reduce is: " << endl;
		F[i].ReduceAFraction();
		cout << endl;
	}
	cout << "\nb) Compare two fractions: " << endl;
	F[0].Compare(F[1]);
	TEMP = F[0];
	F[0].ReduceToTheSameDenominator(F[1]);
	F[1].ReduceToTheSameDenominator(TEMP);
	cout << "\n " << F[0].numerator << "/" << F[0].denominator << endl;
	cout << "\n " << F[1].numerator << "/" << F[1].denominator << endl;

	cout << "\nc) Calculate: " << endl;

	cout << " - Sum: ";
	K.SUM(F[0], F[1]);
	K.ReduceAFraction();
	
	cout << " - Subtract: ";
	K.SUBTRACT(F[0], F[1]);
	K.ReduceAFraction();

	cout << " - Multiply: ";
	K.MULTIPLY(F[0], F[1]);
	K.ReduceAFraction();

	cout << " - Divide: ";
	K.DIVIDE(F[0], F[1]);
	K.ReduceAFraction();
	system("pause");
}