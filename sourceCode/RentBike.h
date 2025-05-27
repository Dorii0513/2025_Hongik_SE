#ifndef RENTBIKE_H
#define RENTBIKE_H

#include "BikeCollection.h"
#include "UserCollection.h"

class RentBike {
private:
    BikeCollection* bikeCollection;
    UserCollection* userCollection;
public:
    RentBike(BikeCollection* bc, UserCollection* uc);
    std::string getBikeName(std::string bikeID);
};

#endif