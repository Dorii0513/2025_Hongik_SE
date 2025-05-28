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

/*
	함수 이름 : setLoggedIn
	기능	  : User의 isLoggedIn 상태를 변경한다.
	전달 인자 : 없음
	반환값    : 없음
*/
void User::setLoggedIn(bool status) {
    isLoggedIn = status;
}

/*
	함수 이름 : setLoggedIn
	기능	  : User의 isLoggedIn 상태를 반환한다.
	전달 인자 : 없음
	반환값    : isLoggedIn 값 반환
*/
bool User::getLoggedIn() {
    return isLoggedIn;
}

/*
	함수 이름 : setRole
	기능	  : admin인지 member인지 User의 역할을 정의한다
	전달 인자 : std::string role -> user의 역할
	반환값    : 없음
*/
void User::setRole(std::string role){
	userRole = role;
}

/*
	함수 이름 : setRole
	기능	  : 저장된 User의 역할을 정의한다
	전달 인자 : 없음
	반환값    : userRole
*/
std::string User::getRole(){
	return userRole;
}