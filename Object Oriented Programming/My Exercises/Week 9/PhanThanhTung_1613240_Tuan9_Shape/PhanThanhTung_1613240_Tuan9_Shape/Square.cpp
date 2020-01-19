#include "Square.h"
#include <iostream>
using namespace std;

void Square::InputShape()
{
	Shape4Point::InputShape();
}

void Square::CheckingShape()
{
	Shape4Point::CheckingShape();
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

