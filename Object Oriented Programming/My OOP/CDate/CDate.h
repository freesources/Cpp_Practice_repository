#pragma once
#include <iostream>
using namespace std;

class CDate
{
private:
	int DD, MM, YYYY;
public:
	CDate(int Day = 0, int Month = 0, int Year = 0) { InputDate(Day, Month, Year); };
	~CDate();
	void InputDate(int Day, int Month, int Year);
	friend CDate operator++(CDate &Date, int);
	friend CDate operator--(CDate &Date, int);
	friend istream& operator >> (istream &is, CDate &Date);
	friend ostream& operator << (ostream &os, CDate &Date);
};