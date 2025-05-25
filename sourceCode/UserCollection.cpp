#include <string>
#include "UserCollection.h"

/*
	함수 이름 : addNewUser
	기능	  : UerCollection의 멤버변수인 members에 회원가입한 새로운 멤버를 저장한다.
	전달 인자 : const Member& member -> 회원가입한 Member 데이터
	반환값    : 없음
*/

void UserCollection::addNewUser(const Member& member) {
	members.push_back(member);
}