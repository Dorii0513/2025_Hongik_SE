#include "Account.h"

/*
함수 이름 : Account
기능 : 계정 생성자
전달 인자 : const string& id -> 아이디
		const string& pw -> 비밀번호
		const string& phone -> 핸드폰 번호
반환값 : 없음
*/
Account::Account(const string& id, const string& pw, const string& phone)
        : id(id), password(pw), phoneNumber(phone) {}

/*
함수 이름 : getId
기능 : 계정의 아이디 값을 반환합니다.
전달 인자 : 없음
반환값 : string타입의 id 값
*/
string Account::getId() const {
	return id;
}

/*
함수 이름 : getPassword
기능 : 계정의 비밀번호 값을 반환합니다.
전달 인자 : 없음
반환값 : string타입의 password 값
*/
string Account::getPassword() const {
	return password;
}