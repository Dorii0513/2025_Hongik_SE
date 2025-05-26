#include "Login.h"

Login::Login(UserCollection* uc):userCollection(uc){}

bool Login::loginUser(std::string inputID, std::string inputPW){
    return userCollection->loginUser(inputID,inputPW);
}