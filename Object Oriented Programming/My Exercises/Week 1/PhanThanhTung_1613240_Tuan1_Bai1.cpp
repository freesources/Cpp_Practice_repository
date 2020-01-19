/* Class Exercise:
Bai 1: Viet chuong trinh nhap vao mot mang n (do nguoi dung nhap vao) phan tu la cac so nguyen roi xuat
ra mang cac phan tu duoc sap xep theo thu tu tang dan.
*/

#include <iostream>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#define SWAP(type,a,b) {type temp = a; a = b; b = temp;}
using namespace std;

void Input(int arrArrayA[], int &iNumberOfElement)
{
	for (int i = 0; i < iNumberOfElement; i++)
	{
		cout << "\n\ta[" << i << "]=";
		cin >> arrArrayA[i];
	}
}
void Output(int arrArrayA[], int iNumberOfElement)
{
	for (int i = 0; i < iNumberOfElement; i++)
	{
		cout << "\t";
		cout << arrArrayA[i];
	}
}
void InterchangeSort(int arrArrayA[], int iNumberOfElement)
{
	int i, j;
	for (i = 0; i < iNumberOfElement - 1; i++)
		for (j = i + 1; j < iNumberOfElement; j++)
			if (arrArrayA[j] < arrArrayA[i])
				SWAP(int, arrArrayA[i], arrArrayA[j]);
}

int main()
{
	int arrArrayA[100], iNumberOfElement;
	cout << "\nHow many elements? ";
	cin >> iNumberOfElement;
	Input(arrArrayA, iNumberOfElement);
	InterchangeSort(arrArrayA, iNumberOfElement);
	cout << "\nA[] after sort: \n";
	Output(arrArrayA, iNumberOfElement);
	cout << endl;
	system("pause");
}
