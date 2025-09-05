#ifndef VEHICLE_H
#define VEHICLE_H
#include <ctime>

class Vehicle{
    protected:
    int ID;
    std::time_t timeOfEntry;

    public:
    Vehicle (int ID);
    int getID()const;
    std::time_t getTimeOfEntry() const;

    virtual int getParkingDuration() const=0;

    virtual ~Vehicle();
};


#endif