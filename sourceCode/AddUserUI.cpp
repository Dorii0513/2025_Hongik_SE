#include <string>
#include "AddUserUI.h"
#include "AddUser.h"

AddUserUI::AddUserUI(AddUser* ctrl): control(ctrl){}

/*
	함수 이름 : AddUserUI::join(std::ifstream& in_fp, std::ofstream& out_fp)
	기능	  : in_fp 파일로부터 전달 받은 회원가입을 위한 id, pw, phoneNumber 정보를 Control 클래스를 통해 UserCollection에 저장하고, 입력한 회원 가입 정보를 출력함.
	전달 인자 : std::ifstream& in_fp, std::ofstream& out_fp -> 입력 및 출력 값
	반환값    : 없음
*/
void AddUserUI::join(std::ifstream& in_fp, std::ofstream& out_fp) 
{
    std::string id, pw, phoneNumber;
    in_fp >> id >> pw >> phoneNumber;

    control->addNewUser(id, pw, phoneNumber);  // AddUser의 기능 호출

    out_fp << "1.1. 회원가입" << std::endl;
    out_fp << id << " " << pw << " " << phoneNumber << " " << std::endl;
}