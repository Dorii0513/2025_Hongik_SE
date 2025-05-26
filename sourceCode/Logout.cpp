#include "Logout.h"

/*
	함수 이름 : Logout 
	기능	  : Logout control 클래스 생성자
	전달 인자 : UserCollection* uc -> login을 위해 저장된 user의 계정 정보를 활용하기 위해 collection 클래스를 전달 인자로 갖는다.
	반환값    : 없음
*/
Logout::Logout(UserCollection* uc):userCollection(uc){}

/*
	함수 이름 : getLoggedInID 
	기능	  : userCollection을 통해 getLoggedInID 함수를 호출하며, login되어있는 user의 ID 값을 반환한다.
	전달 인자 : 없음
	반환값    : user의 ID 값을 반환 
*/
string Logout::getLoggedInID(){
    return userCollection->getLoggedInID();
}