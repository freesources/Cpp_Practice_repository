#include "Shape4Point.h"

void Shape4Point::InputShape()
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

void Shape4Point::CheckingShape()
{
	cout << "Checking . . ." << endl;
}
