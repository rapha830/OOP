#include "Vehicle.h"

Vehicle::Vehicle(int ID):ID(ID),timeOfEntry(std::time(nullptr)){}

int Vehicle::getID() const{
    return ID;
}

std::time_t Vehicle::getTimeOfEntry() const{
    return timeOfEntry;
}

Vehicle::~Vehicle(){}