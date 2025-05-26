#ifndef ADDBIKE_H
#define ADDBIKE_H

#include "BikeCollection.h"
#include "Bike.h"

class AddBike {
private:
    BikeCollection* bikeCollection;     //User의 목록을 저장, 관리하는 collection class

public:
    AddBike(BikeCollection* bc);
    void addNewBike(const std::string& bikeID, const std::string& bikeName);
};

#endif