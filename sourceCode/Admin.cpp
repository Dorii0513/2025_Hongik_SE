#include "Admin.h"

/*
	함수 이름 : Admin
	기능	  : Admin entity 클래스 생성자로, User 클래스를 상속받기 때문에, Admin을 생성하기 위해서는 Account 객체도 함께 생성해 주어야 한다
	전달 인자 : 없음
	반환값    : 없음
*/
Admin::Admin() : User(new Account("admin", "admin", "")) {}