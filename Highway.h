#pragma once
#include "Vehicle.h"

#include <vector>
#include <algorithm>
struct Highway
{
    void changeSpeed(int newSpeed);
    void addVehicle(Vehicle* v);
    void removeVehicle(Vehicle* v);
private:
    void addVehicleInternal(Vehicle* v);
    void removeVehicleInternal(Vehicle* v);
    int speedLimit = 65;
    std::vector<Vehicle*> vehicles;
	friend class HighwayPatrol; //allowing the HighwayPatrol class to access private members of the Highway class
};