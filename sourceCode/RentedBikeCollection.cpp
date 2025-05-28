#include "RentedBikeCollection.h"

/*
	함수 이름 : RentedBikeCollection
	기능	  : RentedBikeCollection 생성자.
	전달 인자 : 없음
	반환값    : 없음
*/
RentedBikeCollection::RentedBikeCollection(){}

/*
	함수 이름 : addRentedBike
	기능	  : 대여할 자전거 정보를 rentedBikes 배열에 저장한다
	전달 인자 : Bike* bike -> 대여할 자전거
	반환값    : 없음
*/
void RentedBikeCollection::addRentedBike(Bike* bike) {
	rentedBikes.push_back(bike);
}

/*
	함수 이름 : getList
	기능	  : 대여한 자전거 rentedBikes 배열을 반환한다
	전달 인자 : 없음
	반환값    : rentedBikes
*/
vector<Bike*> RentedBikeCollection::getList(){
    return rentedBikes;
}