#ifndef BIKECOLLECTION_H
#define BIKECOLLECTION_H

#include "Bike.h"

#include <vector>
#include <string>

using namespace std;

class BikeCollection
{
    private:
        vector<Bike*> bikes;    // 관리자가 추가한 자전거 목록
    public:
        BikeCollection();
        bool rentBike(string inputBikeID);
        string getBikeName();
        void addNewBike(Bike* bike);
};

#endif