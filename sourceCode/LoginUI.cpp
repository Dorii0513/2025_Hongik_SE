#include "LoginUI.h"

LoginUI::LoginUI(Login* login) {
    this->login = login; 
}

void LoginUI::tryLogin(std::ifstream& in_fp, std::ofstream& out_fp){
    std::string id, pw;
    in_fp >> id >> pw ;

    login->loginUser(id, pw);

    out_fp << "2.1. 로그인" << std::endl;
    out_fp << id << " " << pw << " " << std::endl;
}