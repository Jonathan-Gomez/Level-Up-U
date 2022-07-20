// Challenge 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	cout << "Module 1\n\tChapter 3\n\t\tChallenge 1" << endl;
	cout << "Write a program to check and return whether it is currently a leap year." << endl << endl;

	int year;
	string response;

	cout << "Please enter a year: ";
	cin >> year;

	cout << endl;

	if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
	{
		cout << year << " IS a leap year." << endl;
	}
	else
	{
		cout << year << " IS NOT a leap year." << endl;
	}
}