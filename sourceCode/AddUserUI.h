#ifndef ADDUSERUI_H
#define ADDUSERUI_H

#include "AddUser.h"
#include <fstream>

class AddUserUI {
private:
    AddUser* control;

public:
    AddUserUI(AddUser* ctrl) : control(ctrl) {}

        void join(std::ifstream& in_fp, std::ofstream& out_fp) {
        std::string id, pw, phoneNumber;
        in_fp >> id >> pw >> phoneNumber;

        control->addNewUser(id, pw, phoneNumber);  // AddUser의 기능 호출

        out_fp << "1.1. 회원가입" << std::endl;
        out_fp << id << " " << pw << " " << phoneNumber << " " << std::endl;
    }
};

#endif