#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>
using namespace std;

class Account {
private:
    string id;          //아이디
    string password;    //비밀번호
    string phoneNumber; //휴대폰 번호

public:
    Account(const string& id, const string& pw, const string& phone);
    string getId() const;
    string getPassword() const;
};

#endif