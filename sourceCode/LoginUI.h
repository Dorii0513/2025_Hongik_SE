#ifndef LOGINUI_H
#define LOGINUI_H

#include "Login.h"
#include <fstream>

class LoginUI {
private:
    Login* login;   // login control클래스
public:
    LoginUI(Login* ctrl);
    void tryLogin(std::ifstream& in_fp, std::ofstream& out_fp);
};

#endif