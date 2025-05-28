#ifndef ADMIN_H
#define ADMIN_H
#include "User.h"
#include "Account.h"

class Admin: public User
{
public:
    Admin();
    void addRentedBike(Bike* bike) override;
    std::vector<Bike*> getRentedBikes() override;
    ~Admin() override {};   //소멸자
};

#endif