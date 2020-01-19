/*Bài 2a: Viết chương trình nhập vào 1 ngày, tìm ngày kế tiếp và xuất kết quả.*/

#include <iostream>
using namespace std;
struct Date
{
	int Day;
	int Month;
	int Year;
};
void InputDay(Date *D)
{
	do
	{
		cout << "\nInput your day: ";
		cin >> D->Day;
		if (D->Day > 31)
		{
			cout << "Wrong day! A month just have most 31 days!" << endl;
			cout << "Please try again!" << endl;
		}

	} while (D->Day > 31);
}
void InputMonth(Date *D)
{
	do
	{
		cout << "Input your month: ";
		cin >> D->Month;
		if (D->Month > 12)
		{
			cout << "Wrong month! A year just have most 12 months!" << endl;
			cout << "Please try again!" << endl;
		}
	} while (D->Month > 12);
}
void InputYear(Date *D)
{
	while (D->Month > 12);
	cout << "Input your year: ";
	cin >> D->Year;
}
void OutputThenextDay(Date D)
{
	cout << "\nThe next day of your is: " << endl;
	cout << D.Day + 1 << "/" << D.Month << "/" << D.Year << endl;
}
void OutputThenextMonth(Date D)
{
	cout << "\nThe next day of your is: " << endl;
	cout << 1 << "/" << D.Month + 1 << "/" << D.Year << endl;
}
void OutputThenextYear(Date D)
{
	cout << "\nThe next day of your is: " << endl;
	cout << 1 << "/" << 1 << "/" << D.Year + 1 << endl;
}
void main()
{
	Date D;
	InputDay(&D);
	InputMonth(&D);
	switch (D.Month)
	{
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
	{
		InputYear(&D);
		if (D.Day == 31 && D.Month == 12)
			OutputThenextYear(D);
		else if
			(D.Day == 31 && D.Month != 12)
			OutputThenextMonth(D);
		else
			OutputThenextDay(D);
		break;
	}
	case 4: case 6: case 9: case 11:
	{
		if (D.Day == 31)
		{
			cout << "This month only has 30 days at most!" << endl;
			InputDay(&D);
		}
		InputYear(&D);
		if (D.Day == 30)
			OutputThenextMonth(D);
		else
			OutputThenextDay(D);
		break;
	}
	case 2:
	{
		InputYear(&D);
		if ((D.Year % 4) == 0 && (D.Year % 4) != 0 || (D.Year % 100) == 0 && (D.Year % 400) == 0)
		{
			if (D.Day > 29)
			{
				cout << "This year is a leap year, so February has 29 days at most!" << endl;
				InputDay(&D);
			};
			if (D.Day == 29)
				OutputThenextMonth(D);
			else
				OutputThenextDay(D);
		}
		else
		{
			if (D.Day > 28)
			{
				cout << "This is not a leap year, so February only has 28 days at most!" << endl;
				InputDay(&D);
			};
			if (D.Day == 28)
				OutputThenextMonth(D);
			else
				OutputThenextDay(D);
		}
	}
	}
	system("pause");
}
