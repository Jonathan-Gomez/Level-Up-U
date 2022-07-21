#pragma once
#include <string>
#include <iostream>
using namespace std;

class Vehicle
{
public:
	string make;
	string model;
	int year;

	void drive() {
		cout << "This is the base class, please override me.";
	}
};

