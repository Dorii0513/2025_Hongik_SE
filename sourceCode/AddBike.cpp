#include "AddBike.h"
#include "Bike.h"
#include "BikeCollection.h"


AddBike::AddBike(BikeCollection* bc, UserCollection* uc):bikeCollection(bc), userCollection(uc) {}

void AddBike::addNewBike(const std::string &bikeID, const std::string &bikeName)
{
    std::string id = userCollection->getLoggedInID();
    
    if (id == "Admin"){
        Bike* bike = new Bike(bikeID, bikeName);
        bikeCollection->addNewBike(bike);
    }
}
