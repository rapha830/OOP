#include "Car.h"
#include <ctime>

Car::Car(int ID):Vehicle(ID){}

int Car::getParkingDuration() const {
    std::time_t now = std::time(nullptr);
    int duration = static_cast<int>(now - timeOfEntry);
    return duration * 0.9;
}