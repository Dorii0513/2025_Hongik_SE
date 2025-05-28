#include "ListRentedBike.h"

/*
	함수 이름 : ListRentedBike 
	기능	  : ListRentedBike control 클래스 생성자
	전달 인자 : UserCollection* uc -> 유저가 가지고 있는 대여 자전거 목록을 각각 반환할 수 있도록 userCollection을 인자로 갖는다.
	반환값    : 없음
*/
ListRentedBike::ListRentedBike( UserCollection* uc):userCollection(uc){}

/*
	함수 이름 : getRentedList 
	기능	  : 로그인 되어 있는 유저의 자전거 대여 목록을 반환한다.
	전달 인자 : 없음
	반환값    : Bike 타입 배열의 user->getRentedBikes();
*/
std::vector<Bike*> ListRentedBike::getRentedList() {
    User* user = userCollection->getLoggedinUser();
    return user->getRentedBikes();
}