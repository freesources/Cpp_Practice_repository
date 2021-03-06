#include "Square.h"
#include <iostream>
using namespace std;

void Square::Input()
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

void Square::CheckSquare()
{
	if ((A.GetY() == B.GetY() && C.GetY() == D.GetY()) && A.GetX()==D.GetX() && B.GetX() == C.GetX()|| (B.GetY() == C.GetY() && D.GetY() == A.GetY()) && B.GetX() == A.GetX() && C.GetX()==D.GetX())
	{
		if (A.Distance(B) == B.Distance(C) && B.Distance(C) == C.Distance(D) && C.Distance(D) == D.Distance(A))
		{
			cout << "It is a square! With information of coordinate: " << endl;
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
			cout << "It is NOT a square!!";
	}
	else
		cout << "It is NOT a square!!" << endl;
}

