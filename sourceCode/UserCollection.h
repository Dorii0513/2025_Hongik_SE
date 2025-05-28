#ifndef USERCOLLECTION_H
#define USERCOLLECTION_H

#include "Admin.h"
#include "User.h"

#include <vector>
#include <string>

using namespace std;

class UserCollection
{
    private:
        vector<User*> users;    //서비스를 이용하는 모든 사용자 목록
    public:
        UserCollection();
        bool loginUser(std::string inputID, std::string inputPW);
        User* getLoggedinUser(); 
        void addNewUser(User* user);
        ~UserCollection();
};

#endif