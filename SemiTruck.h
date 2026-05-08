#pragma once
#include "Vehicle.h"

struct SemiTruck : public Vehicle
{
	SemiTruck(const std::string& s) : Vehicle(s) {};
	void honkHorn() {};
	void pullOver() { delete this; };
};