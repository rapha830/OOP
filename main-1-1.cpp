#include <iostream>
#include <vector>
#include <ctime>
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

int main(){
    int numVehicles;
    std::cout << "how many cars?: " << std::endl;
    std::cin >> numVehicles;

    std::vector<Vehicle*> vehicles;

    for (int i=0; i<numVehicles; ++i){
        int id, type;
        std::cout << "Please enter the ID of vehicle" << i << std::endl;
        std::cin >> id;

        std::cout << "Please enter vehicle types(1-car, 2-bus, 3-motorbike): " << std::endl;
        std::cin >> type;

        switch (type){
            case 1:
            vehicles.push_back(new Car(id));
            break;
            case 2:  
            vehicles.push_back(new Bus(id));
            break;
            case 3:  
            vehicles.push_back(new Motorbike(id));
            break;
        }

    }

    for(Vehicle* v : vehicles){
        std::cout << "ID: " << v->getID() << " parcking time: " << v->getParkingDuration() << " seconds" << std::endl;
        delete v;

    }

    return 0;

}