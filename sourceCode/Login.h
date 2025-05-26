#ifndef LOGIN_H
#define LOGIN_H

#include "UserCollection.h"

class Login {
private:
    UserCollection* userCollection;
public:
    Login(UserCollection* uc);
    bool loginUser(std::string inputID, std::string inputPW);
};

#endif