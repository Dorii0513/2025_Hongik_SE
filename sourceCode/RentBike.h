#ifndef RENTBIKE_H
#define RENTBIKE_H

#include "BikeCollection.h"

class RentBike {
private:
    BikeCollection* bikeCollection;
public:
    RentBike(BikeCollection* bc);
    std::string getBikeName(std::string bikeID);
};

#endif