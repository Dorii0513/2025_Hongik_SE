#include "ExitProgramUI.h"

/*
	함수 이름 : ExitProgramUI 
	기능	  : ExitProgramUI의 생성자
	전달 인자 : ExitProgram* ctrl ->  ExitProgram의 컨트롤 클래스
	반환값    : 없음
*/
ExitProgramUI::ExitProgramUI(ExitProgram* ctrl) {
    this->control = ctrl;
}

/*
	함수 이름 : exit
	기능	  : ExitProgram 컨트롤 클래스를 통해 doExit 메서드를 호출하며, ouput 값을 출력한다.
	전달 인자 : std::ofstream& out_fp ->  output.txt
	반환값    : 없음
*/
void ExitProgramUI::exit(std::ofstream& out_fp) {
    out_fp << "6.1. 종료" << std::endl;
    control->doExit();
}