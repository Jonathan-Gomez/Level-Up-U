// Challenge 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	srand((unsigned)time(0));

	cout << "Module 1\n\tChapter 4\n\t\tChallenge 1" << endl;
	cout << "Write a program to find and display the biggest number(element) in an array of integers. Hint the size of the array is unimportant as long as there's a way to check that the number displayed is definitely the biggest number." << endl << endl;

	int myArray[10] = {};

	cout << "Array: ";
	for (int i = 0; i < size(myArray); i++)
	{
		int randomNum = 1 + rand() % 20;
		myArray[i] = randomNum;
		cout << randomNum << " ";
	}

	cout << endl << endl;

	int highestNum = 0;
	int index = 0;

	for (int i = 0; i < size(myArray); i++)
	{
		if (myArray[i] > highestNum)
		{
			highestNum = myArray[i];
			index = i;
		}
	}

	cout << "Largest Number: " << highestNum << endl;
	cout << "Index: " << index << endl;

}
