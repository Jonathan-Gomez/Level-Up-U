// Challenge 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

void Factor(int num) {
	string response = "";

	for (int i = 1; i <= num; i++)
	{
		if (num % i == 0)
		{
			response = response + to_string(i) + " ";
		}
	}

	cout << "The Factors of " << num << " are: " << response << endl;
}

int GetNumberFromUser() {
	int returnNum;

	cout << "Please enter an EVEN number to return the factor: ";
	cin >> returnNum;

	return returnNum;
}

int main()
{
	cout << "Module 1\n\tChapter 3\n\t\tChallenge 2" << endl;
	cout << "Write a program to display all factors of a number provided by the user. Take an input of a positive value and write back all of the values factors." << endl << endl;

	int UserNum;

	do
	{
		UserNum = GetNumberFromUser();
	} while (UserNum % 2 != 0);

	Factor(UserNum);

	
}