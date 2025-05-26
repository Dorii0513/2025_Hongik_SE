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

string BikeCollection::getBikeName()
{
    for (Bike* bike : bikes) {
		if (bike->getRented()) {
			return bike->getName();
		}
	}
	return ""; 
}

void BikeCollection::addNewBike(Bike *bike)
{
    bikes.push_back(bike);
}
