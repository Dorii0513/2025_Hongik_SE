#ifndef ADDBIKE_UI
#define ADDBIKE_UI

#include "AddBike.h"
#include <fstream>

class AddBikeUI {
private:
    AddBike* control;   // AddBike control클래스
public:
    AddBikeUI(AddBike* ctrl);
    void addBike(std::ifstream& in_fp, std::ofstream& out_fp);
};

#endif