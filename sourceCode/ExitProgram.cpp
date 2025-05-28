#include "ExitProgram.h"

/*
	함수 이름 : ExitProgram
	기능	  : ExitProgram control 클래스 생성자
	전달 인자 : bool* state -> isProgramExit 상태 전달 받음
	반환값    : 없음
*/
ExitProgram::ExitProgram(bool* state) {
    this->isProgramExit = state;
}

/*
	함수 이름 : doExit
	기능	  : isProgramExit 값을 true로 설정한다.
	전달 인자 : 없음
	반환값    : 없음
*/
void ExitProgram::doExit() {
    *isProgramExit = true;
}