#include <iostream>
#include <chrono>
#include <thread>
#include "ParkingLot.h"
#include "Car.h"
#include "Motorbike.h"
#include "Bus.h"

int main() {

    ParkingLot parkingLot(10);
    
   
    std::cout << "Parking lot capacity: 10" << std::endl;
    std::cout << "Current vehicles: " << parkingLot.getCount() << std::endl;

    int vehicleID = 1;
    
    std::cout << "Parking 5 Cars..." << std::endl;
    for (int i = 0; i < 5; i++) {
        Vehicle* car = new Car(vehicleID++);
        parkingLot.parkVehicle(car);
        std::cout << "Car " << vehicleID-1 << " parked. Current count: " << parkingLot.getCount() << std::endl;
    }

    std::cout << "Parking 3 Buses..." << std::endl;
    for (int i = 0; i < 3; i++) {
        Vehicle* bus = new Bus(vehicleID++);
        parkingLot.parkVehicle(bus);
        std::cout << "Bus " << vehicleID-1 << " parked. Current count: " << parkingLot.getCount() << std::endl;
    }
    
    // 停放 2 辆 Motorbike
    std::cout << "Parking 2 Motorbikes..." << std::endl;
    for (int i = 0; i < 2; i++) {
        Vehicle* motorbike = new Motorbike(vehicleID++);
        parkingLot.parkVehicle(motorbike);
        std::cout << "Motorbike " << vehicleID-1 << " parked. Current count: " << parkingLot.getCount() << std::endl;
    }
    
    std::cout << "Parking completed!" << std::endl;
    std::cout << "Total vehicles parked: " << parkingLot.getCount() << std::endl;
    
    std::cout << "Waiting for some vehicles to exceed 15 seconds..." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(16));

    int overstayingCount = parkingLot.countOverstayingVehicles(15);
    
    std::cout << "Number of vehicles staying longer than 15 seconds: " << overstayingCount << std::endl;
    std::cout << "Total vehicles in lot: " << parkingLot.getCount() << std::endl;
    
    return 0;
}
