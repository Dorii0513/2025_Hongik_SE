#ifndef RENTBIKEUI_H
#define RENTBIKEUI_H

#include "RentBike.h"
#include <fstream>

class RentBikeUI {
private:
    RentBike* control;   // logout control클래스
public:
    RentBikeUI(RentBike* ctrl);
    void tryRentBike(std::ifstream& in_fp, std::ofstream& out_fp);
};

#endif