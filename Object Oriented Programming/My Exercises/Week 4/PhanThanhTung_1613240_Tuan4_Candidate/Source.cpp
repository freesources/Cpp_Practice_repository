#include <iostream>
#include <string.h>
#include "Candidate.h"
#define MAX 100
using namespace std;

int main()
{
	int i, n;
	Candidate C[MAX];
	cout << "How many Student? ";
	cin >> n;
	for (i = 0; i < n; i++)
	{
		C[i].InputInfor();
		C[i].GPA();
	}
	cout << "\n - Students have sum of mark's Subject over 15 are: -" << endl;
	for (i = 0; i < n; i++)
	{
		C[i].OutputInfor();
	}
	system("pause");
}