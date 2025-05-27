#include "Member.h"

Member::Member(Account* acc) : User(acc) {}

void Member::addRentedBike(Bike* bike) {
    rentedBikeCollection.addRentedBike(bike);
}

std::vector<Bike*> Member::getRentedBikes(){
    return rentedBikeCollection.getList();
}