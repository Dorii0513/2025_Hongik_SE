#ifndef ADMIN_H
#define ADMIN_H
#include "User.h"

class Admin: public User
{
    public:
        Admin() : User(Account("admin", "admin", "")) {}
        Admin(const Account& acc) : User(acc) {} //?

        void regsterBike();
        // string getRole() const override { return "admin"; }
};

#endif