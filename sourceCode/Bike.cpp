#include "Bike.h"

Bike::Bike(const std::string& id, const std::string& name): bikeID(id), bikeName(name){}

std::string Bike::getName()
{
    return bikeName;
}

std::string Bike::getID()
{
    return bikeID;
}

void Bike::setRented(bool status)
{
    isRented = status;
}

bool Bike::getRented()
{
    return isRented;
}
