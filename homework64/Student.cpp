#include "Student.h"
#include<iostream>
using namespace std;

Student::Student(string name, int age, string name_univer, int year, string rector, int arr[10], int year1, string faculty) : Human(name, age), University(name_univer, year, rector)
{
	for (int i = 0; i < 10; i++)
	{
		this->arr[i] = arr[i];
	}
	this->year1 = year;
	this->faculty = faculty;
}
void Student::Enter()
{
	Human::Enter();
	University::Enter();
	cout << "Enter 10 grades\n";
	for (int i = 0; i < 10; i++)
	{
		cout << i + 1 << ": ";
		cin >> arr[i];
	}
	cout << "Enter the university coure: ";
	cin >> year1;
	cout << "Enter the name of the faculty: ";
	cin >> faculty;
} 
void Student::Show()
{
	Human::Show();
	University::Show();
	cout << "Grades";
	for (int i = 0; i < 10; i++)
	{
		cout << i + 1 << ": " << arr[i] << endl;
	}
	cout << "\nThe university coure: " << year1;
	cout << "\nThe name of the faculty: " << faculty;

}