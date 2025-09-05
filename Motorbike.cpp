#include "Motorbike.h"
#include <ctime>

Motorbike::Motorbike(int ID):Vehicle(ID){}

int Motorbike::getParkingDuration() const {
    std::time_t now = std::time(nullptr);
    int duration = static_cast<int>(now - timeOfEntry);
    return duration * 0.85;
};