#pragma once
#include "University.h"
#include "Human.h"


class Student : public University, public Human
{
protected:
	int arr[10];
	int year1;
	string faculty;
public:
	Student() = default;
	Student(string name, int age, string name_univer, int year, string rector, int arr[10], int year1, string faculty);
	void Enter();
	void Show();
};