#include "AddBike.h"
#include "Bike.h"
#include "BikeCollection.h"


AddBike::AddBike(BikeCollection* bc, UserCollection* uc):bikeCollection(bc), userCollection(uc) {}

void AddBike::addNewBike(const std::string &bikeID, const std::string &bikeName)
{
    User* user = userCollection->getLoggedinUser();     
    std::string id = user->getAccount().getId();
    
    if (id == "admin"){             // 로그인한 사용자가 Admin인지 확인
        Bike* bike = new Bike(bikeID, bikeName);
        bikeCollection->addNewBike(bike);
    }
}
