#include "BikeCollection.h"

BikeCollection::BikeCollection(){}

bool BikeCollection::rentBike(string inputBikeID)
{
     for (Bike* bike : bikes) {
		string id = bike->getID();
		if (inputBikeID == id) {
			bike->setRented(true);
			return true;
		}
	}
	return false; 
}

Bike* BikeCollection::getBike()
{
    for (Bike* bike : bikes) {
		if (bike->getRented()) {
			return bike;
		}
	}
	return nullptr; 
}

void BikeCollection::addNewBike(Bike *bike)
{
    bikes.push_back(bike);
}
