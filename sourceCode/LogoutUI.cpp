#include "LogoutUI.h"
/*
	함수 이름 : LogoutUI 
	기능	  : LogoutUI boundary 클래스 생성자
	전달 인자 : Logout* ctrl -> Logout control 클래스
	반환값    : 없음
*/
LogoutUI::LogoutUI(Logout* ctrl){
    this->logout = ctrl;
}

/*
	함수 이름 : tryLogout 
	기능	  : control 클래스로부터, getLoggedInID 메서드를 호출하여 현재 로그인 되어있는 ID 값을 전달 받고,
            이후 output 값을 출력합니다.
	전달 인자 : std::ofstream& out_fp -> output.txt 파일
	반환값    : 없음
*/
void LogoutUI::tryLogout(std::ofstream& out_fp){
    string id = logout->getLoggedInID();
    out_fp << "2.2. 로그아웃" << std::endl;
    out_fp << "> " << id << std::endl;
    out_fp << std::endl;
}