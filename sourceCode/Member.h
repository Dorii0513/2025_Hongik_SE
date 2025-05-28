#ifndef MEMBER_H
#define MEMBER_H

#include "RentedBikeCollection.h"
#include "User.h"
#include "Bike.h"

class Member: public User {
    private:
        RentedBikeCollection rentedBikeCollection;  // 각 유저가 가지고 있는 자전거 대여 목록을 관리
    public:
        Member(Account* acc);
        void addRentedBike(Bike* bike) override;
        std::vector<Bike*> getRentedBikes() override;
        ~Member() override {};
};

#endif