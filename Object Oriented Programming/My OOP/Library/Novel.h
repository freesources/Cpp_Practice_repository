#pragma once
#include "Book.h"

class Novel: public Book
{
	string kindOfNovel;
public:
	Novel();
	~Novel();

	void InputInfo();
	string getkindOfNovel();
	void OutputInfo();
};

