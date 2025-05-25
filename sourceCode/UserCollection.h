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
        vector<Member> members;
        Admin admin;
        User* loggedInUser;
    public:
        UserCollection(): admin(Account("admin", "admin", "")){}
        bool login(const string& id, const string& password);
        void logout();
        User* getLoggedInUser() const;
        void addNewUser(const Member& member) {
            members.push_back(member);
        }
};

#endif