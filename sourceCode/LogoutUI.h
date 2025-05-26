#ifndef LOGOUTUI_H
#define LOGOUTUI_H

#include "Logout.h"
#include <fstream>

class LogoutUI {
    private:
    Logout* logout;   // logout control클래스
public:
    LogoutUI(Logout* ctrl);
    void tryLogout(std::ofstream& out_fp);
};

#endif