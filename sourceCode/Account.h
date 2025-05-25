#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>
using namespace std;

class Account {
private:
    string id;
    string password;
    string phoneNumber;

public:
    Account(const string& id, const string& pw, const string& phone);
    string getId() const { return id; }
    string getPassword() const { return password; }
};

#endif