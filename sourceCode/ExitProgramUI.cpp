#include "ExitProgramUI.h"

ExitProgramUI::ExitProgramUI(ExitProgram* ctrl) {
    this->control = ctrl;
}

void ExitProgramUI::exit(std::ofstream& out_fp) {
    out_fp << "6.1. 종료" << std::endl;
    control->doExit();
}