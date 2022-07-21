// Challenge 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Plane.h"
#include "Car.h"
#include "Boat.h"
using namespace std;

void MakePlane() {
    Plane myPlane;
    myPlane.make = "Cessna";
    myPlane.model = "Skyhawk";
    myPlane.year = 1987;

    myPlane.drive();
}

void MakeCar() {
    Car myCar;
    myCar.make = "Toyota";
    myCar.model = "Tacoma";
    myCar.year = 2022;

    myCar.drive();
}

void MakeBoat() {
    Boat myBoat;
    myBoat.make = "Sea-Doo";
    myBoat.model = "Wake Pro";
    myBoat.year = 2021;

    myBoat.drive();
}

int main()
{
    cout << "Module 1\n\tChapter 4\n\t\tChallenge 2" << endl;
    cout << "Create a vehicle base class, and from that create the necessary classes to get to boat, car and airplane." << endl << endl;

    MakeBoat();
    MakePlane();
    MakeCar();
}
