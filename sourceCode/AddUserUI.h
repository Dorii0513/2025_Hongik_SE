#ifndef ADDUSERUI_H
#define ADDUSERUI_H

#include "AddUser.h"
#include <fstream>

class AddUserUI {
private:
    AddUser* control;       //AddUser control 클래스

public:
    AddUserUI(AddUser* ctrl);
    void join(std::ifstream& in_fp, std::ofstream& out_fp);
};

#endif