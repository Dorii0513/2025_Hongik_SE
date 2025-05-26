#ifndef USER_H
#define USER_H
#include "Account.h"

#include <string>
using namespace std;

class User
{
private:
    Account account;             //User가 가지고 있는 Account entity 클래스
    bool isLoggedIn = false;    //login한 상태인지 확인
public:
    explicit User(Account* acc);
    // virtual string getRole() const = 0;
    Account getAccount();
    void setLoggedIn(bool status);
    bool getLoggedIn();
};

#endif