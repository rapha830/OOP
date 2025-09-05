#include <iostream>
#include "ParkingLot.h"
#include "Car.h"
#include "Motorbike.h"
#include "Bus.h"

int main() {
    ParkingLot parkingLot(10);
    
    std::cout << "Welcome to the Parking System!" << std::endl;
    std::cout << "Parking lot capacity: " << 10 << std::endl;
    std::cout << "Current vehicles: " << parkingLot.getCount() << std::endl;
    
    std::cout << "PARKING PHASE" << std::endl;
    int vehicleID = 1;
    char vehicleType;
    
    while (parkingLot.getCount() < 10) {
        std::cout << "Enter vehicle type (C for Car, M for Motorbike, B for Bus): ";
        std::cin >> vehicleType;
        
        Vehicle* newVehicle = nullptr;
        
        switch (vehicleType) {
            case 'C':
            case 'c':
                newVehicle = new Car(vehicleID);
                std::cout << "Created Car with ID: " << vehicleID << std::endl;
                break;
            case 'M':
            case 'm':
                newVehicle = new Motorbike(vehicleID);
                std::cout << "Created Motorbike with ID: " << vehicleID << std::endl;
                break;
            case 'B':
            case 'b':
                newVehicle = new Bus(vehicleID);
                std::cout << "Created Bus with ID: " << vehicleID << std::endl;
                break;
            default:
                std::cout << "Invalid vehicle type! Please enter C, M, or B." << std::endl;
                continue;
        }
        
        parkingLot.parkVehicle(newVehicle);
        std::cout << "Current vehicles in lot: " << parkingLot.getCount() << std::endl;
        
        vehicleID++;
    }
    
    std::cout << "Parking lot is now full!" << std::endl;
    std::cout << "Total vehicles parked: " << parkingLot.getCount() << std::endl;

    int removeID;
    
    while (parkingLot.getCount() > 0) {
        std::cout << "Enter vehicle ID to remove (or 0 to exit): ";
        std::cin >> removeID;
        
        if (removeID == 0) {
            std::cout << "Exiting unparking phase." << std::endl;
            break;
        }
        
        std::cout << "Attempting to remove vehicle with ID: " << removeID << std::endl;
        parkingLot.unparkVehicle(removeID);
        std::cout << "Current vehicles in lot: " << parkingLot.getCount() << std::endl;
    }
    
    std::cout << "Final vehicle count: " << parkingLot.getCount() << std::endl;
    std::cout << "Thank you for using the Parking System!" << std::endl;
    
    return 0;
}
