// User.cpp
#include "User.h"

/*
	함수 이름 : User
	기능	  : User entity 클래스 생성자이며 Account를 가지고 있다. 
	전달 인자 : 없음
	반환값    : 없음
*/
User::User(Account* acc) : account(*acc) {}

/*
	함수 이름 : getAccount
	기능	  : User의 Account를 반환한다
	전달 인자 : 없음
	반환값    : user의 account값 반환
*/
Account User::getAccount() {
    return account;
}

void User::setLoggedIn(bool status) {
    isLoggedIn = status;
}

bool User::getLoggedIn() {
    return isLoggedIn;
}