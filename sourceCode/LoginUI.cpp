#include "LoginUI.h"

/*
	함수 이름 : LoginUI 
	기능	  : LoginUI boundary 클래스 생성자
	전달 인자 : Login* ctrl -> Login control 클래스
	반환값    : 없음
*/
LoginUI::LoginUI(Login* ctrl) {
    this->login = ctrl;
}

/*
	함수 이름 : tryLogin 
	기능	  : input.txt 파일의 input 값을 전달 받고, 
                이를 control 클래스로 전달하여 loginUser 메서드를 호출합니다. 
                이후 로그인이 성공할 시, ouput 값을 출력합니다.
	전달 인자 : Lstd::ifstream& in_fp ->  input.txt 파일
              std::ofstream& out_fp -> output.txt 파일
	반환값    : 없음
*/
void LoginUI::tryLogin(std::ifstream& in_fp, std::ofstream& out_fp){
    std::string id, pw;
    in_fp >> id >> pw ;

    if (login->loginUser(id, pw) == 1) {
        out_fp << "2.1. 로그인" << std::endl;
        out_fp << id << " " << pw << " " << std::endl;
    }
}