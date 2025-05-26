// User.cpp
#include "User.h"

User::User(Account* acc) : account(*acc) {}

Account User::getAccount() {
    return account;
}