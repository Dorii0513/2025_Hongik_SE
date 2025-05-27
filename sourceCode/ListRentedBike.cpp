#include "ListRentedBike.h"

ListRentedBike::ListRentedBike( UserCollection* uc):userCollection(uc){}

std::vector<Bike*> ListRentedBike::getRentedList() {
    User* user = userCollection->getLoggedinUser();
    return user->getRentedBikes();
}