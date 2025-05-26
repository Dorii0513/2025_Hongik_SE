#ifndef LOGIN_H
#define LOGIN_H

#include "UserCollection.h"

class Login {
private:
    UserCollection* userCollection;     //User의 목록을 저장, 관리하는 collection class
public:
    Login(UserCollection* uc);
    bool loginUser(std::string inputID, std::string inputPW);
};

#endif