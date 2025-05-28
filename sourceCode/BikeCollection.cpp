#include "BikeCollection.h"

/*
	함수 이름 : BikeCollection
	기능	  : BikeCollection 초기 값 지정
	전달 인자 : 없음
	반환값    : 없음
*/
BikeCollection::BikeCollection(){}

/*
	함수 이름 : rentBike
	기능	  : 입력한 자전거 ID 값이 저장되어있는 자전거 ID 값과 일치하면 해당 Bike 타입의 자전거를 반환한다
	전달 인자 : string inputBikeID -> 입력한 자전거 ID
	반환값    : bike / nullptr -> 자전거 또는 nullptr을 반환한다
*/
Bike* BikeCollection::rentBike(string inputBikeID)
{
     for (Bike* bike : bikes) {
		string id = bike->getID();
		if (inputBikeID == id) {
			bike->setRented(true);
			return bike;
		}
	}
	return nullptr; 
}

/*
	함수 이름 : addNewBike
	기능	  : 관리자가 입력한 자전거를 배열에 저장한다
	전달 인자 : Bike *bike -> 등록할 자전거
	반환값    : 없음
*/
void BikeCollection::addNewBike(Bike *bike)
{
    bikes.push_back(bike);
}

/*
	함수 이름 : ~BikeCollection
	기능	  : 프로그램 종료시 저장된 bike 값들을 해제한다.
	전달 인자 : 없음
	반환값    : 없음
*/
BikeCollection::~BikeCollection() {
    for (Bike* bike : bikes) {
        delete bike;
    }
}