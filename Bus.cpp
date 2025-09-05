#include "Bus.h"
#include <ctime>

Bus::Bus(int ID):Vehicle(ID){}

int Bus::getParkingDuration()const{
    std::time_t now = std::time(nullptr);
    int duration = static_cast<int>(now - timeOfEntry);
    return duration * 0.75;
}
