#pragma once
#include "Book.h"
class SchoolBook: public Book
{
protected:
	int Grade;
public:
	SchoolBook();
	~SchoolBook();

	void InputInfo();
	int getGrade();
	void OutputInfo();
};

