#ifndef MEMBER_H
#define MEMBER_H

#include "RentedBikeCollection.h"
#include "User.h"
#include "Bike.h"

class Member: public User {
    private:
        RentedBikeCollection rentedBikeCollection;
    public:
        Member(Account* acc);
        void addRentedBike(Bike* bike) override;
        std::vector<Bike*> getRentedBikes() override;
};

#endif