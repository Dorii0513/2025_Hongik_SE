#include "RentBike.h"

/*
	함수 이름 : RentBike 
	기능	  : RentBike control 클래스 생성자
	전달 인자 : BikeCollection* bc -> 대여한 자전거를 저장하기 위함
            UserCollection* uc -> 자전거를 대여하는 유저를 파악하기 위함
	반환값    : 없음
*/
RentBike::RentBike(BikeCollection* bc, UserCollection* uc):bikeCollection(bc), userCollection(uc){}

/*
	함수 이름 : getBikeName 
	기능	  : 사용자가 입력한 bikeID 값과 일치하는 자전거의 이름을 반환한다
	전달 인자 : std::string bikeID -> 사용자가 입력한 자전거 아이디
	반환값    : bike->getName() 또는 ""
*/
std::string RentBike::getBikeName(std::string bikeID){
    Bike* bike = bikeCollection->rentBike(bikeID);
    if (bike != nullptr) {
        User* user = userCollection->getLoggedinUser();
        user->addRentedBike(bike);
        return bike->getName();
    }
    return "";
}