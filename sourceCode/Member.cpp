#include "Member.h"

/*
	함수 이름 : Member
	기능	  : Member entity 클래스 생성자이며 Account를 가지고 있다. 
	전달 인자 : 없음
	반환값    : 없음
*/
Member::Member(Account* acc) : User(acc) {}

/*
	함수 이름 : addRentedBike
	기능	  : 대여할 자전거를 rentedBikeCollection의 배열에 저장한다.
	전달 인자 : Bike* bike -> 대여할 자전거
	반환값    : 없음
*/
void Member::addRentedBike(Bike* bike) {
    rentedBikeCollection.addRentedBike(bike);
}

/*
	함수 이름 : getRentedBikes
	기능	  : rentedBikeCollection로부터 저장한 자전거 대여 목록을 반환한다.
	전달 인자 : 없음
	반환값    : rentedBikeCollection.getList()
*/
std::vector<Bike*> Member::getRentedBikes(){
    return rentedBikeCollection.getList();
}