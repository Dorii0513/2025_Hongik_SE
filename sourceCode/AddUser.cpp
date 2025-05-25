#include "AddUser.h"
#include "UserCollection.h"

// 생성자 정의
AddUser::AddUser(UserCollection& uc)
  : userCollection(uc)
{}

// addNewUser 메서드 정의
void AddUser::addNewUser(const std::string& id,
                         const std::string& pw,
                         const std::string& phoneNumber) {

    Account newAccount(id, pw, phoneNumber);
    Member newMember(newAccount);
    userCollection.addNewUser(newMember);
}
