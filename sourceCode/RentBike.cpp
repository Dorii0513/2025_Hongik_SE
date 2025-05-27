#include "RentBike.h"

RentBike::RentBike(BikeCollection* bc, UserCollection* uc):bikeCollection(bc), userCollection(uc){}

std::string RentBike::getBikeName(std::string bikeID){
    Bike* bike = bikeCollection->rentBike(bikeID);
    if (bike != nullptr) {
        User* user = userCollection->getLoggedinUser();
        user->addRentedBike(bike);
        return bike->getName();
    }
    return "";
}