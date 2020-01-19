/*Xây dựng các loại đối tượng sách: Sách giáo khoa, tiểu thuyết, tạp chí. Viết chương trình cho
phép quản lý một danh sách các loại đối tượng trên.*/

#include "Book.h"
#include "Magazine.h"
#include "Novel.h"
#include "SchoolBook.h"
#define MAX 100

int functionTable()
{
	int choice;
	cout << " _____________ BOOK MANAGEMENT _____________" << endl;
	cout << "  Choose function:" << endl;
	cout << "  1. Add a School book." << endl;
	cout << "  2. Add a Novel." << endl;
	cout << "  3. Add a Magazine." << endl;
	cout << "  -------------------" << endl;
	cout << "  4. Print information list of library." << endl;
	cout << "  5. Find information of a book in library. (search by name)" << endl;
	cout << "  6. Remove a book in library. (remove by name)" << endl;
	cout << "  -------------------" << endl;
	cout << "  0. Cancle." << endl;
	cout << "" << endl;
	cout << "Your choice: ";
	do
	{
		cin >> choice;
		if (choice < 0 || choice > 6)
		{
			cout << "Wrong chosen! Please choose again! " << endl;
			cout << "Your choice: ";
		}
	} while (choice < 0 || choice > 6);
	return choice;
}

int main()
{
	int choice, check, i = 0;
	string nameFinding;
	Book *Book[MAX];
	do {
		cout << endl;
		choice = functionTable();
		switch (choice)
		{
		case 1:
			Book[i] = new SchoolBook();
			Book[i++]->InputInfo();
			break;
		case 2:
			Book[i] = new Novel();
			Book[i++]->InputInfo();
			break;
		case 3:
			Book[i] = new Magazine();
			Book[i++]->InputInfo();
			break;
		case 4:
			for (int j = 0; j < i; j++)
			{
				Book[j]->OutputInfo();
				cout << endl;
			}
			break;
		case 6:
			check = 0;
			cin.ignore();
			cout << "Input name of book that you want to remove: ";
			getline(cin, nameFinding);
			for (int j = 0; j < i; j++)
			{
				if (nameFinding == Book[j]->getNameOfBook())
				{
					check++;
					delete Book[j];
					cout << "Remove successfully!" << endl;
				}
			}
			if (check == 0)
				cout << "Not found this BOOK!!" << endl;
			break;
		case 5:
			check = 0;
			cin.ignore();
			cout << "Input name of book that you want to find information: ";
			getline(cin, nameFinding);
			for (int j = 0; j < i; j++)
			{
				if (nameFinding == Book[j]->getNameOfBook())
				{
					Book[j]->OutputInfo();
					cout << endl;
					check++;
				}
			}
			if (check == 0)
				cout << "Not found this BOOK!!" << endl;
			break;
		case 0:
			exit(0);
		}
	} while (choice != 0);
	system("pause");
}