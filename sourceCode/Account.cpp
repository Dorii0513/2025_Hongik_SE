#include "Account.h"

/*
함수 이름 : Account
기능 : 계정 정보 초기화
전달 인자 : const string& id -> 아이디
		const string& pw -> 비밀번호
		const string& phone -> 핸드폰 번호
반환값 : 없음
*/
Account::Account(const string& id, const string& pw, const string& phone)
        : id(id), password(pw), phoneNumber(phone) {}

string Account::getId() const {
	return id;
}

string Account::getPassword() const {
	return password;
}