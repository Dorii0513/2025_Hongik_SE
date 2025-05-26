#include "Logout.h"

/*
	함수 이름 : Login 
	기능	  : Login control 클래스 생성자
	전달 인자 : UserCollection* uc -> login을 위해 저장된 user의 계정 정보를 활용하기 위해 collection 클래스를 전달 인자로 갖는다.
	반환값    : 없음
*/
Logout::Logout(UserCollection* uc):userCollection(uc){}

/*
	함수 이름 : loginUser 
	기능	  : userCollection을 통해 loginUser 함수를 호출하며, login의 성공 여부를 bool 값으로 반환한다.
	전달 인자 : std::string inputID -> input.txt에 입력한 id 값
              std::string inputPW -> input.txt에 입력한 password 값
	반환값    : login 성공 여부를 bool 값으로 반환 
*/
bool Logout::logoutUser(){
    return userCollection->logoutUser();
}

string Logout::getLogoutID(){
    return userCollection->getLoggedInUserID();
}