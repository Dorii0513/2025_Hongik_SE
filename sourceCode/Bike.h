#ifndef BIKE_H
#define BIKE_H

#include <string>

class Bike
{
private:     
    std::string bikeID;         // 자전거 아이디
    std::string bikeName;      // 자전거 이름
    bool isRented = false;    //rented한 상태인지 확인
public:
    Bike(const std::string& id, const std::string& name);
    std::string getName();
    std::string getID();
    void setRented(bool status);
    bool getRented();
};

#endif