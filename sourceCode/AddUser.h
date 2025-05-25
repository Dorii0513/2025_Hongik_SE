#ifndef ADDUSER_H
#define ADDUSER_H

#include "UserCollection.h"
#include "Account.h"
#include "Member.h"

class AddUser {
private:
    UserCollection& userCollection;

public:
    AddUser(UserCollection& uc);
    void addNewUser(const std::string& id, const std::string& pw, const std::string& phoneNumber);
};

#endif