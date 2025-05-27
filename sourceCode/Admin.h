#ifndef ADMIN_H
#define ADMIN_H
#include "User.h"
#include "Account.h"

class Admin: public User
{
public:
    Admin();
public:
    void addRentedBike(Bike* bike) override;
    std::vector<Bike*> getRentedBikes() override;
    ~Admin() override {};
};

#endif