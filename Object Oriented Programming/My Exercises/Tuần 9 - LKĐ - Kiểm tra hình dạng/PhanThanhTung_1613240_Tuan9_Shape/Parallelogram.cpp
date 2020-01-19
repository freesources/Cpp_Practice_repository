#include "Parallelogram.h"

void Parallelogram::InputShape()
{
	Shape4Point::InputShape();
}

void Parallelogram::CheckingShape()
{
	Shape4Point::CheckingShape();
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
