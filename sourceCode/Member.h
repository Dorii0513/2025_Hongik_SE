#ifndef MEMBER_H
#define MEMBER_H

#include "RentedBikeCollection.h"
#include "User.h"
#include "Bike.h"

class Member: public User {
    private:
        RentedBikeCollection rentedBikes;
    public:
        void rentBike(Bike* bike);
        void getRentedBikes();
};

#endif