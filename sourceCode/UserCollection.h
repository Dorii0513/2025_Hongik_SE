#ifndef USERCOLLECTION_H
#define USERCOLLECTION_H

#include "Member.h"
#include "Admin.h"
#include "User.h"

#include <vector>
#include <string>

using namespace std;

class UserCollection
{
    private:
        vector<User*> users;
        User* loggedInUser;
    public:
        UserCollection();
        bool loginUser(std::string inputID, std::string inputPW);
        // UserCollection.h
        // std::vector<User*> getAllUsers() const;
        bool login();
        void logout();
        User* getLoggedInUser() const;
        void addNewUser(User* user);
};

#endif