#ifndef RENTEDBIKECOLLECTION_H
#define RENTEDBIKECOLLECTION_H
#include "Bike.h"
#include <vector>
using namespace std;

class RentedBikeCollection {
private:
    std::vector<Bike*> rentedBikes; // 대여한 자전거 목록
public:
    RentedBikeCollection();
    void addRentedBike(Bike* bike);
    std::vector<Bike*> getList();
};
#endif