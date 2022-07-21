#pragma once
#include "Vehicle.h"
class Boat :
	public Vehicle
{
public:
	void drive() {
		cout << "A " << year << " " << make << " " << model << " floats on the water." << endl;
	}
	
};

