/*Bài 1: Xây dựng lớp điểm trong mặt phẳng 2 chiều (tọa độ là số thực) và các phương thức sau:
-	Khởi tạo mặc định (có tọa đồ là (0;0)) và khởi tạo có 2 tham số.
-	Phương thức khởi tạo sao chép (nếu cần thiết).
-	Phương thức hủy bỏ (nếu cần thiết).
-	Phương thức nhập cho điểm. Nếu người dùng không muốn nhập liệu thì tọa độ điểm sẽ có giá trị mặc nhiên là (0;0).
-	Phương thức xuất cho điểm.

Viết chương trình thực hiện yêu cầu sau:
-	Nhập vào N điểm, N do người dùng nhập vào.
-	Xuất ra N điểm vừa nhập.
-	Tìm khoảng cách lớn nhất và nhỏ nhất giữa 2 điểm trong tập điểm vừa nhập.*/

#include "Coordinate.h"
#include <iostream>
#include <math.h>
#define MAX 100
using namespace std;

Coordinate::Coordinate()
{
	AbscissaX = 0;
	OrdinateY = 0;
}

Coordinate::Coordinate(double xx, double yy)
{
	AbscissaX = xx;
	OrdinateY = yy;
}

void Coordinate::SetX(double x)
{
	AbscissaX = x;
}

void Coordinate::SetY(double y)
{
	OrdinateY = y;
}

Coordinate::Coordinate(const Coordinate &D)
{
	AbscissaX=D.AbscissaX;
	OrdinateY=D.OrdinateY;
}

double Coordinate::GetX()
{
	return AbscissaX;
}

double Coordinate::GetY()
{
	return OrdinateY;
}


void Coordinate::SetCoordinate()
{
	cout << "Input Abscissa X: ";
	cin >> AbscissaX;
	cout << "Input Ordinate Y: ";
	cin >> OrdinateY;
}

void Coordinate::PrintInfor()
{
	cout << "(" << AbscissaX << ";" << OrdinateY<<")";
	cout << endl;
}

void Coordinate::Move(double dx, double dy)
{
	AbscissaX += dx;
	OrdinateY += dy;
}

double Coordinate::Distance(Coordinate P)
{
	return sqrt(pow((AbscissaX - P.AbscissaX), 2) + pow((OrdinateY - P.OrdinateY), 2));
}

int main()
{
	int i, j, iNumberOfPoint, imax, jmax, imin, jmin;
	double maxDistance = 0, minDistance;
	Coordinate C[MAX];

	cout << "How many point in the coordinate plane? ";
	cin >> iNumberOfPoint;
	for (i = 0; i < iNumberOfPoint; i++)
	{
		cout << "\nPoint " << i + 1 << " :" << endl;
		C[i].SetCoordinate();
	}
	minDistance = C[0].Distance(C[1]);
	cout << "\n- INFORMATION OF POINT:";
	for (i = 0; i < iNumberOfPoint; i++)
	{
		cout << endl;
		cout << "Point " << i+1 << ": ";
		C[i].PrintInfor();
		for (j = i + 1; j < iNumberOfPoint - 1; j++)
		{
			if (C[i].Distance(C[j]) >= maxDistance)
			{
				maxDistance = C[i].Distance(C[j]);
				imax = i + 1;
				jmax = j + 1;
			}
			if (C[i].Distance(C[j]) <= minDistance)
			{
				minDistance = C[i].Distance(C[j]);
				imin = i + 1;
				jmin = j + 1;
			}
		}
	}
	cout << endl;
	cout << "\n - The biggest distance is: " << maxDistance << " (from point " << imax << " to point " << jmax << ")" << endl;
	cout << "\n - The smallest distance is: " << minDistance << " (from point " << imin << " to point " << jmin << ")" << endl;
	system("pause");
	return 0;
}