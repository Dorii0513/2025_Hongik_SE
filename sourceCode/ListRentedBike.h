#ifndef LISTRENTEDBIKE_H
#define LISTRENTEDBIKE_H

#include "RentedBikeCollection.h"
#include "UserCollection.h"

class ListRentedBike {
private:
    UserCollection* userCollection;     
public:
    ListRentedBike(UserCollection* uc);
    std::vector<Bike*> getRentedList();
};

#endif