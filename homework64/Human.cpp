#include "Human.h"

Human::Human(string name, int age) {
	this->name = name;
	this->age = age;
}
void Human::Enter()
{
	cout << "Enter name: ";
	cin >> name;
	cout << "Enter age: ";
	cin >> age;
}
void Human::Show()
{
	cout << "\nName " << name;
	cout << "\nAge: " << age;
}