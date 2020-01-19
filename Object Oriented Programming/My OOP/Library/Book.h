#pragma once
#include <iostream>
#include <string>
using namespace std;

class Book
{
protected:
	string nameOfBook;
	string author;
	int yearOfPublishing;
	string publishingCompany;
	double price;
public:
	Book();
	virtual ~Book();

	virtual void InputInfo();
	
	string getNameOfBook();
	string getAuthor();
	int getYoP();
	string getPC();
	double getPrice();

	virtual void OutputInfo();
};