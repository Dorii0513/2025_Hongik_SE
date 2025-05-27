#ifndef USER_H
#define USER_H
#include "Account.h"
#include "Bike.h"

#include <string>
#include <vector>
using namespace std;

class User
{
private:
    Account account;             //User가 가지고 있는 Account entity 클래스
    bool isLoggedIn = false;    //login한 상태인지 확인
    std::string userRole;
public:
    explicit User(Account* acc);
    Account getAccount();
    void setLoggedIn(bool status);
    bool getLoggedIn();
    void setRole(std::string role);
    std::string getRole();
    virtual void addRentedBike(Bike* bike) = 0;
    virtual std::vector<Bike*> getRentedBikes() = 0;
    virtual ~User() = default;
};

#endif