#pragma once
#include<iostream>
using namespace std;

class Human
{
protected:
	string name;
	int age;
public:
	Human() = default;
	Human(string name, int age);
	void Enter();
	void Show();
};

