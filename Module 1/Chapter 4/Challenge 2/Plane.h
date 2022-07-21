#pragma once
#include "Vehicle.h"
class Plane :
    public Vehicle
{
public:
	void drive() {
		cout << "A " << year << " " << make << " " << model << " flys in the air." << endl;
	}
};

