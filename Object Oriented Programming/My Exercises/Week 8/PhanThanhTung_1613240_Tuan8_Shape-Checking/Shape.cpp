/*Bài 3: Xây dựng các loại đối tượng hình thang, hình bình hành, bình chữ nhật, hình vuông. Chỉ xét các hình thang, hình
bình hành có đáy song song với trục hoành, chỉ xét hình chữ nhật và hình vuông có cạnh song song với trục tọa độ. Viết
chương trình cho phép nhập vào một trong các hình kể trên.	*/

#include <iostream>
#include "Rectangle.h"
#include "Parallelogram.h"
#include "Trapezoid.h"
using namespace std;

int functionTable()
{
	int choice;
	cout << "\n_______ SHAPE CHECKING TOOL_______" << endl;
	cout << "1. Checking a SQUARE. " << endl;
	cout << "2. Checking a RECTANGLE. " << endl;
	cout << "3. Checking a PARALLELOGRAM. " << endl;
	cout << "4. Checking a TRAPEZOID. " << endl;
	cout << "______________________" << endl;
	cout << "0. Cancle." << endl;
	cout << "\nYour choice: ";
	do
	{
		cin >> choice;
		if (choice > 4 || choice < 0)
			cout << "Wrong choosen! Please choose again: ";
	} while (choice > 4 || choice < 0);
	cin.ignore();
	return choice;
}

int main()
{
	int choice;
	Square S;
	Rectangle R;
	Parallelogram P;
	Trapezoid T;
	do
	{
		cout << endl;
		choice = functionTable();
		switch (choice)
		{
		case 1:
		{
			S.Input();
			S.CheckSquare();
			break;
		}
		case 2:
		{
			R.Input();
			R.CheckRectangle();
			break;
		}
		case 3:
		{
			P.Input();
			P.CheckParallelogram();
			break;
		}
		case 4:
		{
			T.Input();
			T.CheckTrapezoid();
			break;
		}
		case 0:
			exit(0);
		}
	} while (choice != 0);
}