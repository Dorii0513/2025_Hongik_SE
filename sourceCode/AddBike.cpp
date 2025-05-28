#include "AddBike.h"
#include "Bike.h"
#include "BikeCollection.h"

/*
	함수 이름 : AddBike
	기능	  : AddBike control 클래스 생성자
	전달 인자 : BikeCollection* bc -> 등록한 자전거를 저장하기 위함.
            UserCollection* uc -> 로그인한 유저를 확인하기 위함.
	반환값    : 없음
*/
AddBike::AddBike(BikeCollection* bc, UserCollection* uc):bikeCollection(bc), userCollection(uc) {}

/*
	함수 이름 : addNewBike
	기능	  : 로그인한 유저가 admin인지 확인한 후, 자전거 등록을 진행합니다.
	전달 인자 : const std::string &bikeID -> 입력받은 자전거 아이디, 
            const std::string &bikeName -> 입력받은 자전거 이름
	반환값    : 없음
*/
void AddBike::addNewBike(const std::string &bikeID, const std::string &bikeName)
{
    User* user = userCollection->getLoggedinUser();     
    std::string id = user->getAccount().getId();
    
    if (id == "admin"){             // 로그인한 사용자가 Admin인지 확인
        Bike* bike = new Bike(bikeID, bikeName);
        bikeCollection->addNewBike(bike);
    }
}
