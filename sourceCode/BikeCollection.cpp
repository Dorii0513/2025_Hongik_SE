#include "BikeCollection.h"

BikeCollection::BikeCollection(){}

Bike* BikeCollection::rentBike(string inputBikeID)
{
     for (Bike* bike : bikes) {
		string id = bike->getID();
		if (inputBikeID == id) {
			bike->setRented(true);
			return bike;
		}
	}
	return nullptr; 
}

void BikeCollection::addNewBike(Bike *bike)
{
    bikes.push_back(bike);
}

BikeCollection::~BikeCollection() {
    for (Bike* bike : bikes) {
        delete bike;
    }
}