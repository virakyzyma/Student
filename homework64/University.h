#pragma once
#include<iostream>
using namespace std;

class University
{
protected:
	string name_univer;
	int year;
	string rector;
public:
	University() = default;
	University(string name_univer, int year, string rector);
	void Enter();
	void Show();
};

