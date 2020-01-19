/*Bài 1: Viết chương trình:
a) Nhập vào một phân số và xuất kết quả rút gọn của nó.
b) Nhập vào 2 phân số và xuất ra phân số lớn hơn.
c) Nhập vào 2 phân số rồi tính Tổng - Hiệu - Tích - Thương.
/*_________________Bài 1_________________*/

#include <iostream>
#include <math.h>
#define MAX 2
using namespace std;

struct Fraction
{
	int numerator;
	int denominator;
};
void InputFraction(Fraction *F)
{
	do
	{
		cout << "Input numerator: ";
		cin >> F->numerator;
		cout << "Input denominator: ";
		cin >> F->denominator;
	} while (F->denominator == 0);
}
void ReduceAFraction(Fraction *F)
{
	int a = F->numerator;
	int b = F->denominator;
	if (a < 0)
	{
		a = abs(a);
	}
	while (a != b)
	{
		a > b ? a -= b : b -= a;
	}
	F->numerator = F->numerator / a;
	F->denominator = F->denominator / a;
	cout << F->numerator << "/" << F->denominator << endl;
}
void Compare(Fraction F1, Fraction F2)
{
	float a, b;
	a = (F1.numerator / F1.denominator);
	b = (F2.numerator / F2.denominator);
	if (a > b)
		cout << "First fraction ( " << F1.numerator << "/" << F1.denominator << " ) is bigger than the another one!" << endl;
	else
		cout << "The second fraction ( " << F2.numerator << "/" << F2.denominator << " ) is bigger than the 1st fraction!" << endl;
}
void ReduceToTheSameDenominator(Fraction *F1, Fraction *F2)
{
	int SameDenominator;
	SameDenominator = (F1->denominator)*(F2->denominator);
	F1->numerator = F1->numerator*F2->denominator;
	F2->numerator = F2->numerator*F1->denominator;
	F1->denominator = SameDenominator;
	F2->denominator = SameDenominator;
}
void Calculate(Fraction F1, Fraction F2)
{
	Fraction Sum, Subtract, Multiply, Divide;

	Sum.numerator = F1.numerator + F2.numerator;
	Sum.denominator = F1.denominator;
	cout << " - Sum: ";
	ReduceAFraction(&Sum);

	Subtract.numerator = F1.numerator - F2.numerator;
	Subtract.denominator = F1.denominator;
	cout << " - Subtract: ";
	ReduceAFraction(&Subtract);

	Multiply.numerator = F1.numerator * F2.numerator;
	Multiply.denominator= F1.denominator * F2.denominator;
	cout << " - Multiply: ";
	ReduceAFraction(&Multiply);

	Divide.numerator = F1.numerator*F2.denominator;
	Divide.denominator = F1.denominator*F2.numerator;
	cout << " - Divide: ";
	ReduceAFraction(&Divide);
}
int main()
{
	Fraction F[MAX];
	int i, n = 1;
	cout << "a) Reduce a fraction: " << endl;
	for (i = 0; i <= n; i++)
	{
		InputFraction(&F[i]);
		cout << "The fraction after reduce is: " << endl;
		ReduceAFraction(&F[i]);
		cout << endl;
	}
	cout << "\nb) Compare two fractions: " << endl;
	Compare(F[0], F[1]);
	ReduceToTheSameDenominator(&F[0], &F[1]);
	cout << "\nc) Calculate: " << endl;
	Calculate(F[0], F[1]);
	system("pause");
}