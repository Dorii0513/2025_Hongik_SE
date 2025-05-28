#include "RentBikeUI.h"

/*
	함수 이름 : RentBikeUI 
	기능	  : RentBikeUI boundary 클래스 생성자
	전달 인자 : RentBike* ctrl -> RentBike control 클래스
	반환값    : 없음
*/
RentBikeUI::RentBikeUI(RentBike *ctrl)
{
    this->control = ctrl;
}

/*
	함수 이름 : tryRentBike 
	기능	  : 사용자가 입력한 자전거 아이디와 일치하는 자전거 이름을 찾는 control의 getBikeName 메서드를 호출한다. 이후 ouput을 출력한다
	전달 인자 : std::ifstream& in_fp -> input.txt 파일
            std::ofstream& out_fp -> output.txt 파일
	반환값    : 없음
*/
void RentBikeUI::tryRentBike(std::ifstream& in_fp, std::ofstream& out_fp)
{ 
    std::string bikeID;
    in_fp >> bikeID;

    std::string name = control->getBikeName(bikeID);

    out_fp << "4.1. 자전거 대여" << std::endl;
    out_fp << "> " << bikeID << " " << name << " " << std::endl;
    out_fp << std::endl;
}