#ifndef USER_H
#define USER_H
#include "Account.h"

#include <string>
using namespace std;

class User
{
private:
    Account account;
public:
    explicit User(Account* acc);
    // virtual string getRole() const = 0;
    Account getAccount();
};

#endif