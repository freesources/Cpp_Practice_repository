#pragma once
#include "Book.h"

class Magazine :public Book
{
protected:
	string NationPublishing;
public:
	Magazine();
	~Magazine();

	void InputInfo();
	string getNP();
	void OutputInfo();
};

