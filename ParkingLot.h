#ifndef PARKINGLOT_H
#define PARKINGLOT_H
#include "Vehicle.h"
#include <vector>

class ParkingLot{
    private:
    int maxCapacity;
    int currentCapacity;
    std::vector<Vehicle*> vehicles;
    
    public:
     ParkingLot(int capacity);
    ~ParkingLot();

    int getCount() const;
    void parkVehicle(Vehicle* vehicle);
    void unparkVehicle(int ID);
    int countOverstayingVehicles(int maxParkingDuration);
};

#endif