#include "ParkingLot.h"
#include <iostream>

ParkingLot::ParkingLot(int capacity): maxCapacity(capacity), currentCapacity(0){}

ParkingLot::~ParkingLot() {
    for (auto vehicle : vehicles) {
        delete vehicle;
    }
}

int ParkingLot::getCount() const{
    return currentCapacity;
}

void ParkingLot::parkVehicle(Vehicle* vehicle){
    if(currentCapacity < maxCapacity){
        vehicles.push_back(vehicle);
        currentCapacity++;
    }else{
        std::cout << "The lot is full" << std::endl;
    }
}

void ParkingLot::unparkVehicle(int ID) {
    for (int i=0; i<currentCapacity; ++i) {
        if ((vehicles[i])-> getID() == ID) {  
            vehicles.erase(vehicles.begin() + i);      
            currentCapacity--;      
            return;
        }
    }
    
    std::cout << "Vehicle not in the lot" << std::endl;
}

int ParkingLot::countOverstayingVehicles(int maxParkingDuration) {
    int count = 0;
    std::time_t currentTime = std::time(nullptr);
    
    for (auto vehicle : vehicles) {
        if (vehicle != nullptr) {
            int parkingDuration = static_cast<int>(currentTime - vehicle->getTimeOfEntry());
            if (parkingDuration > maxParkingDuration) {
                count++;
            }
        }
    }
    
    return count;
}