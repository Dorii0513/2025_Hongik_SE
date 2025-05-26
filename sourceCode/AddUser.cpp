#include "AddUser.h"
#include "UserCollection.h"
#include "User.h"

/*
	함수 이름 : AddUser
	기능	  : AddUser control 클래스 생성자
	전달 인자 : UserCollection* uc -> 회원가입한 user를 저장하기 위함
	반환값    : 없음
*/
AddUser::AddUser(UserCollection* uc):userCollection(uc){}

/*
	함수 이름 : addNewUser
	기능	  : 전달 받은 id, pw, phoneNumber를 통해 새로운 Account를 생성하고, 이를 통해 Memeber(회원)을 생성하여 전체 user를 관리하는 UserCollection에 넣어준다.
	전달 인자 : const std::string& id -> 아이디
            const std::string& pw -> 비밀번호
            const std::string& phoneNumber -> 핸드폰 번호
	반환값    : 없음
*/
void AddUser::addNewUser(const std::string& id,
                         const std::string& pw,
                         const std::string& phoneNumber) {

    Account* account = new Account(id, pw, phoneNumber);
    User* user = new User(account);
    userCollection->addNewUser(user);
}
