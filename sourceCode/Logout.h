#ifndef LOGOUT_H
#define LOGOUT_H

#include "UserCollection.h"

class Logout {
private:
    UserCollection* userCollection;     //User의 목록을 저장, 관리하는 collection class
public:
    Logout(UserCollection* uc);
    bool logoutUser();
    string getLogoutID();
};

#endif