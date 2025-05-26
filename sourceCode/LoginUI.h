#ifndef LOGINUI_H
#define LOGINUI_H

#include "Login.h"
#include <fstream>

class LoginUI {
private:
    Login* login;
public:
    LoginUI(Login* login);
    void tryLogin(std::ifstream& in_fp, std::ofstream& out_fp);
};

#endif