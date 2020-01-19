#include <iostream>
#include "Employee.h"
#include "Officer.h"
#include "Worker.h"
#define MAX 100
using namespace std;

int main()
{
	int i, iNoE, choice, o = 0, w = 0, iMax, iMin, checko=0, checkw=0;	//number of employees
	Officer O[MAX];
	Worker W[MAX];
	float SalaryMAX=0, SalaryMIN;
	cout << "Input number of employee: ";
	cin >> iNoE;
	for (i = 0; i < iNoE; i++)
	{
		cout << endl;
		cout << "Choose type of employee that you want to add?" << endl;
		cout << "1. Officer." << endl;
		cout << "2. Worker." << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			O[o].InputNumberofWorkingDays();
			o++;
			break;
		case 2:
			W[w].InputNumberofProducts();
			W[w].InputBasicSalary();
			w++;
			break;
		}
	}
	SalaryMIN = O[0].getSalary();
	cout << "\n____________ EMPLOYEE MANAGER ____________" << endl;
	for (i = 0; i < o; i++)
	{
		if (O[i].getSalary() > SalaryMAX)
		{
			SalaryMAX = O[i].getSalary();
			iMax = i;
		}
		if (O[i].getSalary() < SalaryMIN)
		{
			SalaryMIN = O[i].getSalary();
			iMin = i;
		}
		O[i].Output();
	}
	for (int j = 0; j < w; j++)
	{
		if (W[j].getSalary() > SalaryMAX)
		{
			checko++;
			SalaryMAX = W[j].getSalary();
			iMax = j;
		}
		if (W[j].getSalary() < SalaryMIN)
		{
			checkw++;
			SalaryMIN = W[j].getSalary();
			iMin = j;
		}
		W[j].Output();
	}
	cout << "\nEmployee has the MOST salary is: " << endl;
	if (checko == 0)
		cout << "OFFICER:	\n" << O[iMax].getName() << " | " << O[iMax].getDoB() << " | " << "Salary: " << O[iMax].getSalary() << endl;
	else
		cout << "WORKER:	\n" << W[iMax].getName() << " | " << W[iMax].getDoB() << " | " << "Salary: " << W[iMax].getSalary() << endl;
	cout << "\n\nEmployee has the LEAST salary is: " << endl;
	if (checkw == 0)
		cout << "OFFICER:	\n" << O[iMin].getName() << " | " << O[iMin].getDoB() << " | " << "Salary: " << O[iMin].getSalary() << endl;
	else
		cout << "WORKER:	\n" << W[iMin].getName() << " | " << W[iMin].getDoB() << " | " << "Salary: " << W[iMin].getSalary() << endl;
	system("pause");
}