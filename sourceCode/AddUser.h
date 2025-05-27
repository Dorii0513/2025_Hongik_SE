#ifndef ADDUSER_H
#define ADDUSER_H

#include "UserCollection.h"
#include "RentedBikeCollection.h"
#include "Account.h"
#include "Member.h"

class AddUser {
private:
    UserCollection* userCollection;     //User의 목록을 저장, 관리하는 collection class

public:
    AddUser(UserCollection* uc);
    void addNewUser(const std::string& id, const std::string& pw, const std::string& phoneNumber);
};

#endif