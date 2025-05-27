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

Bike::~Bike() {
    // 현재 별도 동적 메모리 안 쓰면 비워도 OK
}