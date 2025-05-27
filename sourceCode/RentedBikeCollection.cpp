#include "RentedBikeCollection.h"

RentedBikeCollection::RentedBikeCollection(){}

/*
	함수 이름 : addNewUser
	기능	  : UerCollection의 멤버변수인 users 회원가입한 새로운 멤버를 저장한다.
	전달 인자 : const Member& member -> 회원가입한 Member 데이터
	반환값    : 없음
*/
void RentedBikeCollection::addRentedBike(Bike* bike) {
	rentedBikes.push_back(bike);
}

vector<Bike*> RentedBikeCollection::getList(){
    return rentedBikes;
}