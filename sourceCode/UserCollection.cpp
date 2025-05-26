#include <string>
#include "Account.h"
#include "Admin.h"
#include "UserCollection.h"

// UserCollection.cpp
// std::vector<User*> UserCollection::getAllUsers() const {
//     return users;
// }

/*
	함수 이름 : UserCollection
	기능	  : UerCollection의 초기 값 지정 이때, user에 Admin의 id, pw 정보를 넣어준다.
	전달 인자 : 없음
	반환값    : 없음
*/
UserCollection::UserCollection() {
    Admin* admin = new Admin();
    users.push_back(admin);
}

/*
	함수 이름 : addNewUser
	기능	  : UerCollection의 멤버변수인 users 회원가입한 새로운 멤버를 저장한다.
	전달 인자 : const Member& member -> 회원가입한 Member 데이터
	반환값    : 없음
*/
void UserCollection::addNewUser(User* user) {
	users.push_back(user);
}

/*
	함수 이름 : loginUser
	기능	  : 입력받은 id와  password가 userCollection의 users에 저장된 Account 중 일치하는 항목이 있는지 확인한다.
	전달 인자 : cstd::string inputID -> input.txt에 입력한 id 값
              std::string inputPW -> input.txt에 입력한 password 값
	반환값    : login 성공 여부를 bool 값으로 반환
*/
bool UserCollection::loginUser(std::string inputID, std::string inputPW) {
	int n = users.size();
	for (int i = 0; i < n; i++) {
		string id = users[i]->getAccount().getId();
		string pw = users[i]->getAccount().getPassword();
		if (inputID == id && inputPW == pw) {
			users[i]->setLoggedIn(true);
			return true;
		}
	}
	return false; 
}

bool UserCollection::logoutUser() {
	for (User* user : users) {
		if (user->getLoggedIn()) {
			user->setLoggedIn(false);
			return true;
		}
	}
	return false;
}

string UserCollection::getLoggedInUserID() const {
	for (User* user : users) {
		if (user->getLoggedIn()) {
			return user->getAccount().getId();
		}
	}
	return ""; 
}