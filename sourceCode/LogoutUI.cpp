#include "LogoutUI.h"

LogoutUI::LogoutUI(Logout* ctrl){
    this->logout = ctrl;
}

void LogoutUI::tryLogout(std::ofstream& out_fp){
    string id = logout->getLogoutID();
    if (logout->logoutUser() == 1) {
        out_fp << "2.2. 로그아웃" << std::endl;
        out_fp << id << " " << std::endl;
    }
}