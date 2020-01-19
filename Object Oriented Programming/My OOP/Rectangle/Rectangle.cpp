/*Bài 2: Xây dựng lớp tam giác gồm 3 điểm (tạo trong bài 1) và các phương thức sau:
-	Khởi tạo mặc định (gọi khởi tạo mặc định của 3 diểm).
-	Khởi tạo có 3 tham số là 3 điểm nhằm khởi cho 3 điểm của tam giác. 
-	Phương thức hủy bỏ (nếu cần thiết).
-	Phương thức nhập cho tam giác. Nếu người dùng không muốn nhập liệu thì tọa độ các điểm 
sẽ có giá trị mặc nhiên là (0;0).
-	Phương thức xuất cho tam giác.
-	Tính chu vi và diện tích của tam giác. 

Gợi ý tính diện tích tam giác 
SABC = sqrt(p*(p-a)*(p-b)*(p-c)), trong đó: a, b, c là độ dài 3 cạnh và p là nửa chu vi.

Viết chương trình thực hiện yêu cầu sau:
-	Nhập vào N tam giác, N do người dùng nhập vào.
-	Xuất ra N tam giác vừa nhập.
-	Xuất ra tam giác có chu vi lớn nhất, tam giác có diện tích lớn nhất.*/

#include "Rectangle.h"
#include <iostream>
#include <math.h>
#define MAX 100
using namespace std;

void Rectangle::Input()
{
	double xA, yA, xB, yB, xC, yC;
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
	A.SetX(xA);		A.SetY(yA);
	B.SetX(xB);		B.SetY(yB);
	C.SetX(xC);		C.SetY(yC);
}
void Rectangle::Output()
{
	cout << "Coordinate: " << endl;
	cout << "A: " << "(" << A.GetX() << ";" << A.GetY() << ")" << endl;
	cout << "B: " << "(" << B.GetX() << ";" << B.GetY() << ")" << endl;
	cout << "C: " << "(" << C.GetX() << ";" << C.GetY() << ")" << endl;
}
double Rectangle::dA()
{
	return A.Distance(B);
}
double Rectangle::dB()
{
	return B.Distance(C);
}
double Rectangle::dC()
{
	return C.Distance(A);
}
double Rectangle::GetPerimeter()
{
	return (A.Distance(B) + B.Distance(C) + C.Distance(A));
}
double Rectangle::GetArea()
{
	double a, b, c, p;
	a = A.Distance(B);
	b = B.Distance(C);
	c = C.Distance(A);
	p = (a + b + c) / 2;
	return (sqrt(p*(p - a)*(p - b)*(p - c)));
}

int main()
{
	int i, iP, iA, NoR;		//NoT: Number of Rectangle.
	Rectangle R[MAX];
	double maxPerimeter = 0, maxArea = 0;

	cout << "How many rectangle? ";
	cin >> NoR;
	for (i = 0; i < NoR; i++)
	{
		cout << endl;
		cout << "RECTANGLE " << i+1 << ": " << endl;
		R[i].Input();
	}
	for (i = 0; i < NoR; i++)
	{
		cout << "\nRectangle " << i + 1 << " has information: " << endl;
		R[i].Output();
		cout << "Side 1: " << R[i].dA()<<" m";
		cout << "\nSide 2: " << R[i].dB() <<" m";
		cout << "\nSide 3: " << R[i].dC()<<" m";
		cout << "\n\nPERIMETER: " << R[i].GetPerimeter() <<" m";
		cout << "\nAREA: " << R[i].GetArea()<<" m2"<<endl;

		if (R[i].GetPerimeter() > maxPerimeter)
		{
			maxPerimeter = R[i].GetPerimeter();
			iP = i;
		}
		if (R[i].GetArea() > maxArea)
		{
			maxArea = R[i].GetArea();
			iA = i;
		}
	}
	cout << "\n - RECTANGLE HAS THE BIGGEST PERIMETER IS RETANGLE " << iP + 1<< endl;
	cout << " - RECTANGLE HAS THE BIGGEST AREA IS RETANGLE " << iA + 1 << endl;
	system("pause");
	return 0;
}
