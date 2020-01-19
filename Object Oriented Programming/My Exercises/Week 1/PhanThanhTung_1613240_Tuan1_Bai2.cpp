/*Home Exercise :
Bai 2 : Xay dung cau truc diem trong he mat phang toa do Oxy(toa do la cac so thuc).Viet chuong trinh
cho phep nguoi dung nhap vao n (do nguoi dung nhap vao) diem va xuat ra 2 diem co khoang cach lon nhat
trong cac diem vua nhap.*/

/*___Exercise 2: _______________________________________________________*/

#include <iostream>
#include <math.h>
#include <conio.h>
#define MAX 100
using namespace std;
struct InforOfPoint
{
	char NoP[3];
	float X;
	float Y;
};
void InputPoint(InforOfPoint *P)
{
	cout << "Input name of point: ";
	cin >> P->NoP;
	cout << "Input X: ";
	cin >> P->X;
	cout << "Input Y: ";
	cin >> P->Y;
}
void Calculate(InforOfPoint A, InforOfPoint B, int i, float &a)
{
	float fResult;
	fResult = sqrt(pow((A.X - B.X),2) + pow((A.Y - B.Y),2));
	a = fResult;
	cout << "" << i << ". The distance of " << A.NoP << " and " << B.NoP << " is: " << fResult << endl;
}
int main()
{
	float fResult, fMAX;
	int iNumberOfPoint, i, j, savei, savej, count=0;
	InforOfPoint P[MAX];
	float arrResult[50];

	cout << "How many point? : ";
	cin >> iNumberOfPoint;
	for (i = 0; i < iNumberOfPoint; i++)
	{
		cout << "\n";
		InputPoint(&P[i]);
	}
	cout << "\n";
	fMAX = 0;
	for (i=0;i<iNumberOfPoint-1;i++)
		for (j = i + 1; j < iNumberOfPoint; j++)
		{
			count += 1;
			Calculate(P[i], P[j],count,arrResult[count-1]);
			if (arrResult[count - 1] >= fMAX)
			{
				fMAX = arrResult[count - 1];
				savei = i;
				savej = j;
			}
			else
				continue;
		}
	cout << "\nThe most distance is: " << fMAX << " - from " << P[savei].NoP << " to " << P[savej].NoP << "!"<<endl;
	system("pause");
}