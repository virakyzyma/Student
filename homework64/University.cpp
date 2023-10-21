#include "University.h"

University::University(string name_univer, int year_, string rector)
{
	this->name_univer = name_univer;
	year = year_;
	this->rector = rector;
}
void University::Enter()
{
	cout << "Enter the name of the university: ";
	cin >> name_univer;
	cout << "Enter the year the university was founded: ";
	cin >> year;
	cout << "Enter the name of the rector: ";
	cin >> rector;
}
void University::Show()
{
	cout << "\nName of the university " << name_univer;
	cout << "\nYear the university was founded:  " << year;
	cout << "\nName of the rector: " << rector;
}