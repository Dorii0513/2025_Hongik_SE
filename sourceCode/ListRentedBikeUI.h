#ifndef LISTRENTEDBIKEUI_H
#define LISTRENTEDBIKEUI_H

#include "ListRentedBike.h"
#include <fstream>

class ListRentedBikeUI {
private:
    ListRentedBike* control;   // ListRentedBike control클래스
public:
    ListRentedBikeUI(ListRentedBike* ctrl);
    void listBikes(std::ofstream& out_fp);
};

#endif