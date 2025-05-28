#ifndef RENTBIKE_H
#define RENTBIKE_H

#include "BikeCollection.h"
#include "UserCollection.h"

class RentBike {
private:
    BikeCollection* bikeCollection; // 대여한 자전거 목록 저장 위함
    UserCollection* userCollection; // 자전거를 대여한 유저 확인 위함
public:
    RentBike(BikeCollection* bc, UserCollection* uc);
    std::string getBikeName(std::string bikeID);
};

#endif