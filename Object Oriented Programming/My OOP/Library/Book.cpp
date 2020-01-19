#include "Book.h"

Book::Book()
{
}

Book::~Book()
{
}

void Book::InputInfo()
{
	cin.ignore();
	cout << "Input the title: ";
	getline(cin, nameOfBook);
	cout << "Input name of the author: ";
	getline(cin, author);
	cout << "Input publishing company: ";
	getline(cin, publishingCompany);
	cout << "Input year of publishing: ";
	cin >> yearOfPublishing;
	cout << "Input price: ";
	cin >> price;
}

void Book::OutputInfo()
{
	cout << "Getting general information . . ." << endl;
	cout << "[ " << nameOfBook << " | " << author << " | " << publishingCompany << " | " << yearOfPublishing << " | " << price << " VND ]" << endl;
}

string Book::getNameOfBook()
{
	return nameOfBook;
}

string Book::getAuthor()
{
	return author;
}

int Book::getYoP()
{
	return yearOfPublishing;
}

string Book::getPC()
{
	return publishingCompany;
}

double Book::getPrice()
{
	return price;
}
