#ifndef ADMIN_H
#define ADMIN_H
#include "User.h"
#include "Account.h"

class Admin: public User
{
public:
    Admin();
    void regsterBike();
};

#endif