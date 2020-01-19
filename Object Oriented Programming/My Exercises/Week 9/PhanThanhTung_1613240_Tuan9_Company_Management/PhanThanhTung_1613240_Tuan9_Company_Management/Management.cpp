#include "Employee.h"
#include "Officer.h"
#include "Worker.h"
#include "Manager.h"

int functionTable()
{
	int choice;
	cout << " _____________ COMPANY MANAGEMENT _____________" << endl;
	cout << "  Choose function:" << endl;
	cout << "  1. Add information of a OFFICER." << endl;
	cout << "  2. Add information of a WORKER." << endl;
	cout << "  3. Add information of a MANAGER." << endl;
	cout << "  -------------------" << endl;
	cout << "  4. Print information list of EMPLOYEE." << endl;
	cout << "  5. Total salary of COMPANY." << endl;
	cout << "  6. Find a EMPLOYEE (searching by name)." << endl;
	cout << "  -------------------" << endl;
	cout << "  0. Cancle." << endl;
	cout << "" << endl;
	cout << "Your choice: ";
	do
	{
		cin >> choice;
		if (choice < 0 || choice>6)
		{
			cout << "Wrong chosen! Please choose again! " << endl;
			cout << "Your choice: ";
		}
	} while (choice < 0 || choice > 6);
	return choice;
}

int main()
{
	int choice, i = 0;
	double TotalS = 0;
	string nameFinding;
	Employee *Employee[50];
	do {
		cout << endl;
		choice = functionTable();
		switch (choice)
		{
		case 1:
			Employee[i] = new Officer();
			Employee[i]->Input();
			i++;
			break;
		case 2:
			Employee[i] = new Worker();
			Employee[i]->Input();
			i++;
			break;
		case 3:
			Employee[i] = new Manager();
			Employee[i]->Input();
			i++;
			break;
		case 4:
			for (int j = 0; j < i; j++)
			{
				Employee[j]->Output();
				cout << endl;
			}
			break;
		case 5:
			for (int j = 0; j < i; j++)
				TotalS += Employee[j]->getSalary();
			cout << "Total salary: " << TotalS << " $" << endl;
			break;
		case 6:
			{
			cin.ignore();
			cout << "Input name of EMPLOYEE: ";
			getline(cin, nameFinding);
			int check = 0;
			for (int j = 0; j < i; j++)
			{
				if (nameFinding == Employee[j]->getName())
				{
					check++;
					Employee[j]->Output();
				}
			}
			if (check == 0)
				cout << "Not found information of this EMPLOYEE!!"<<endl;
			}
			break;
		case 0:
			exit(0);
		}
	} while (choice!=0);
	system("pause");
}