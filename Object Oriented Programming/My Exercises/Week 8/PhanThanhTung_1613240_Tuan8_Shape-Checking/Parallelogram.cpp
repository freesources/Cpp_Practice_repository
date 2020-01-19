#include "Parallelogram.h"
#include <iostream>
using namespace std;

void Parallelogram::Input()
{
	double xA, yA, xB, yB, xC, yC, xD, yD;
	cout << "Point 1: " << endl;
	cout << "xA: ";
	cin >> xA;
	cout << "yA: ";
	cin >> yA;
	cout << "Point 2: " << endl;
	cout << "xB: ";
	cin >> xB;
	cout << "yB: ";
	cin >> yB;
	cout << "Point 3: " << endl;
	cout << "xC: ";
	cin >> xC;
	cout << "yC: ";
	cin >> yC;
	cout << "Point 4: " << endl;
	cout << "xD: ";
	cin >> xD;
	cout << "yD: ";
	cin >> yD;
	A.SetX(xA);		A.SetY(yA);
	B.SetX(xB);		B.SetY(yB);
	C.SetX(xC);		C.SetY(yC);
	D.SetX(xD);		D.SetY(yD);
}

void Parallelogram::CheckParallelogram()
{
	if ((A.GetY() == B.GetY() && C.GetY() == D.GetY() || (B.GetY() == C.GetY() && D.GetY() == A.GetY())))
	{
		if (A.Distance(B) == C.Distance(D) && B.Distance(C) == A.Distance(D))
		{
			cout << "It is a parallelogram! With information of coordinate: " << endl;
			cout << "A ";
			A.PrintInfor();
			cout << "B ";
			B.PrintInfor();
			cout << "C ";
			C.PrintInfor();
			cout << "D ";
			D.PrintInfor();
		}
		else
			cout << "It is NOT a parallelogram!!";
	}
	else
		cout << "Fours point of you make a shape does not have side parallel with coordinate axis!" << endl;
}
