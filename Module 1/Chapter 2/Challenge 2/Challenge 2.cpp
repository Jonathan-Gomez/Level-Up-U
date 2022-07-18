//  Challenge:
//  Write a program that uses a function to return the value of a number cubed.Take the number as an input from the user and print the cubed value back to the user.

#include <iostream>
using namespace std;

int NumberCubed(int number) {
    return number * number * number;
}

int main()
{
    int number, cube;

    cout << "Module 1\n\tChapter 2\n\t\tChallenge 2" << endl << endl;

    cout << "Enter a number to cube: ";
    cin >> number;

    cube = NumberCubed(number);

    cout << "Cube of " << number << " = " << cube << endl;
    cout << "EQUATION:" << endl;
    cout << number << " * " << number << " * " << number << " = " << cube << endl;

}