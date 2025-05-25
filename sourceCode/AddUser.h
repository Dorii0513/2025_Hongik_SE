#ifndef ADDUSER_H
#define ADDUSER_H

#include "UserCollection.h"

class AddUser {
private:
    UserCollection& userCollection;

public:
    AddUser(UserCollection& uc) : userCollection(uc) {}

    void addNewUser(const std::string& id, const std::string& pw, const std::string& phone) {
        Account newAccount(id, pw, phone);
        Member newMember(newAccount);
        userCollection.addNewUser(newMember);
    }
};

#endif