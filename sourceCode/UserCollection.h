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
        vector<User*> users;
    public:
        UserCollection();
        bool loginUser(std::string inputID, std::string inputPW);
        User* getLoggedinUser(); 
        void addNewUser(User* user);
        ~UserCollection();
};

#endif