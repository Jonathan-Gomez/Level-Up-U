#pragma once
#include "Vehicle.h"
class Car :
    public Vehicle
{
public:
	void drive() {
		cout << "A " << year << " " << make << " " << model << " drives on the road." << endl;
	}
};

