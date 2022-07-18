//	Challenge:
//	Write a program to find the “Sum” and “Average” of “three” numbers.Provide a hint to the user, 
//	take the inputand return some output results to show the user the calculations for their three numbers.

#include <iostream>
using namespace std;

int main()
{
	int first, second, third, sum, average;
	cout << "Module 1\n\tChapter 2\n\t\tChallenge 1" << endl << endl;
	cout << "Sum and Average of 3 numbers\n";

	cout << "Enter first Number: ";
	cin >> first;

	cout << "Enter second Number: ";
	cin >> second;

	cout << "Enter third Number: ";
	cin >> third;

	sum = first + second + third;

	average = sum / 3;

	cout << "\nSUM: " << sum << "\nAVERAGE: " << average << endl;

	cout << "SUM EQUATION: " << endl;
	cout << "\t" << first << " + " << second << " + " << third << " = " << sum << endl;

	cout << "AVERAGE EQUATION: " << endl;
	cout << "\t" << sum << " / 3 = " << average << endl;
}
