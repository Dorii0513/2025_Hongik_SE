#include <string>
#include "UserCollection.h"

/*
	함수 이름 : UserCollection::login(const string& id, const string& password)
	기능	  : 입력된 연산자가 이전 연산자를 대체했습니다. 출력
	전달 인자 : 없음
	반환값    : 없음
*/

void UserCollection::addNewUser(const Member& member) {
	members.push_back(member);
}