#include "RentBikeUI.h"

RentBikeUI::RentBikeUI(RentBike *ctrl)
{
    this->control = ctrl;
}

void RentBikeUI::tryRentBike(std::ifstream& in_fp, std::ofstream& out_fp)
{ 
    std::string bikeID;
    in_fp >> bikeID;

    std::string name = control->getBikeName(bikeID);

    out_fp << "4.1. 자전거 대여" << std::endl;
    out_fp << "> " << bikeID << " " << name << " " << std::endl;
    out_fp << std::endl;
}