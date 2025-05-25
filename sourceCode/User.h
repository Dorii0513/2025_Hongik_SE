#ifndef USER_H
#define USER_H
#include "Account.h"

#include <string>
using namespace std;

class User
{
protected:
    Account account;
public:
    User(const Account& acc) : account(acc) {}
    virtual ~User() = default;
    // virtual string getRole() const = 0;
    string getId() const { 
        return account.getId(); 
    }
};

#endif