#include "Bike.h"

Bike::Bike(const std::string& id, const std::string& name): bikeID(id), bikeName(name){}
/*
	함수 이름 : getName
	기능	  : 자전거의 이름을 반환한다.
	전달 인자 : 없음
	반환값    : bikeName
*/
std::string Bike::getName()
{
    return bikeName;
}

/*
	함수 이름 : getID
	기능	  : 자전거의 ID 값을 반환한다.
	전달 인자 : 없음
	반환값    : bikeID
*/
std::string Bike::getID()
{
    return bikeID;
}

/*
	함수 이름 : setRented
	기능	  : 대여된 자전거이면 true, 아니면 false로 isRented 값을 세팅한다
	전달 인자 : status -> 대여 상태를 나타내는 bool 값
	반환값    : 없음
*/
void Bike::setRented(bool status)
{
    isRented = status;
}

/*
	함수 이름 : getRented
	기능	  : 자전거가 대여된 상태인지 bool 값을 반환한다.
	전달 인자 : 없음
	반환값    : isRented
*/
bool Bike::getRented()
{
    return isRented;
}
