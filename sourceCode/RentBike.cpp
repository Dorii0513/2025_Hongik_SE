#include "RentBike.h"

RentBike::RentBike(BikeCollection* bc):bikeCollection(bc){}

std::string RentBike::getBikeName(std::string bikeID){
    if (bikeCollection->rentBike(bikeID) == 1){
        Bike* bike = bikeCollection->getBike();
        return bike->getName();
    }
    return "";
}