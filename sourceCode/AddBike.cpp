#include "AddBike.h"
#include "Bike.h"
#include "BikeCollection.h"

AddBike::AddBike(BikeCollection* bc):bikeCollection(bc){}

void AddBike::addNewBike(const std::string &bikeID, const std::string &bikeName)
{
    Bike* bike = new Bike(bikeID, bikeName);
    bikeCollection->addNewBike(bike);
}
