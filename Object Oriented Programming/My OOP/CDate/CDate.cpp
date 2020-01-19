#include "CDate.h"

CDate operator++(CDate &D, int)
{
	switch (D.MM)
	{
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
	{
		if (D.DD == 31 && D.MM == 12)
		{
			D.DD = 1;
			D.MM = 1;
			D.YYYY = D.YYYY + 1;
		}
		else if (D.DD == 31 && D.MM != 12)
		{
			D.DD = 1;
			D.MM = D.MM + 1;
		}
		else
			D.DD = D.DD + 1;
		break;
	}
	case 4: case 6: case 9: case 11:
	{
		if (D.DD == 30)
		{
			D.DD = 1;
			D.MM = D.MM + 1;
		}
		else
			D.DD = D.DD + 1;
		break;
	}
	case 2:
	{
		if ((D.YYYY % 4) == 0 && (D.YYYY % 4) != 100 || (D.YYYY % 400) == 0)
		{
			if (D.DD == 29)
			{
				D.DD = 1;
				D.MM = D.MM + 1;
			}
			else
				D.DD = D.DD + 1;
		}
		else
		{
			if (D.DD == 28)
			{
				D.DD = 1;
				D.MM = D.MM + 1;
			}
			else
				D.DD = D.DD + 1;
		}
	}
	return CDate(D.DD, D.MM, D.YYYY);
	}
}

CDate operator--(CDate &D, int)
{
	switch (D.MM)
	{
	case 1: case 5: case 7: case 10: case 12:
	{
		if (D.DD == 1 && D.MM == 1)
		{
			D.DD = 31;
			D.MM = 12;
			D.YYYY = D.YYYY - 1;
		}
		else if (D.DD == 1 && D.MM != 1)
		{
			D.DD = 30;
			D.MM = D.MM - 1;
		}
		else
			D.DD = D.DD - 1;
		break;
	}
	case 2: case 4: case 6: case 9: case 11:
	{
		if (D.DD == 1)
		{
			D.DD = 31;
			D.MM = D.MM - 1;
		}
		else
			D.DD = D.DD - 1;
		break;
	}
	case 8:
	{
		if (D.DD == 1)
		{
			D.DD = 31;
			D.MM = 7;
		}
		else
			D.DD = D.DD - 1;
		break;
	}
	case 3:
	{
		if (D.DD == 1)
		{
			if ((D.YYYY % 4) == 0 && D.YYYY % 100 != 0 || (D.YYYY % 400) == 0)
			{
				D.DD = 29;
				D.MM = 2;
			}
			else
			{
				D.DD = 28;
				D.MM = 2;
			}
		}
		else
		{
			D.DD = D.DD - 1;
		}
	}
	return CDate(D.DD, D.MM, D.YYYY);
	}
}

istream& operator>>(istream & is, CDate & Date)
{
	do
	{
		cout << "\nInput your day: ";
		is >> Date.DD;
		if (Date.DD > 31)
		{
			cout << "Wrong day! A month just have most 31 days!" << endl;
			cout << "Please try again!" << endl;
		}
	} while (Date.DD > 31);

	do
	{
		cout << "Input your month: ";
		is >> Date.MM;
		if (Date.MM > 12)
		{
			cout << "Wrong month! A year just have most 12 months!" << endl;
			cout << "Please try again!" << endl;
		}
	} while (Date.MM > 12);

	switch (Date.MM)
	{
		case 4: case 6: case 9: case 11:
		{
			if (Date.DD == 31)
			{
				cout << "This month only has 30 days at most!" << endl;
				do
				{
					cout << "\nRe-input your day: ";
					is >> Date.DD;
					if (Date.DD > 30)
					{
						cout << "Wrong day! This month just have most 30 days!" << endl;
						cout << "Please try again!" << endl;
					}
				} while (Date.DD > 30);
			}
		}
		break;
		case 2:
		{
			if (Date.DD > 29)
			{
				cout << "February has 29 days at most!!" << endl;
				cout << "Please try again!" << endl;
				do
				{
					cout << "\nRe-input your day: ";
					is >> Date.DD;
					if (Date.DD > 29)
					{
						cout << "Wrong day! This month just have most 29 days!" << endl;
						cout << "Please try again!" << endl;
					}
				} while (Date.DD > 29);
			}
		}
	}

	while (Date.MM > 12);
	cout << "Input your year: ";
	is >> Date.YYYY;

	switch (Date.MM)
	{
	case 2:
		if ((Date.YYYY % 4) == 0 && (Date.YYYY % 4) != 100 || (Date.YYYY % 400) == 0)
		{
			if (Date.DD > 29)
			{
				cout << "This month just have most 29 days!" << endl;
				do
				{
					cout << "\nRe-input your day: ";
					is >> Date.DD;
					if (Date.DD > 29)
					{
						cout << "Wrong day! This month just have most 29 days!" << endl;
						cout << "Please try again!" << endl;
					}
				} while (Date.DD > 29);
			};
		}
		else
		{
			if (Date.DD > 28)
			{
				cout << "This is not a leap year, so February only has 28 days at most!" << endl;
				do
				{
					cout << "\nRe-input your day: ";
					is >> Date.DD;
					if (Date.DD > 28)
					{
						cout << "Wrong day! This month just have most 28 days!" << endl;
						cout << "Please try again!" << endl;
					}
				} while (Date.DD > 28);
			};
		}
		break;
	}
	return is;
}

ostream& operator<<(ostream & os, CDate & Date)
{
	os << "\n" << Date.DD << "/" << Date.MM << "/" << Date.YYYY;
	return os;
}



CDate::~CDate()
{
}

void CDate::InputDate(int Day, int Month, int Year)
{
	DD = Day;
	MM = Month;
	YYYY = Year;
}
