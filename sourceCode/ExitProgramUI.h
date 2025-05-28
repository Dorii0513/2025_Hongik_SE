#ifndef EXITPROGRAMUI_H
#define EXITPROGRAMUI_H

#include <fstream>
#include "ExitProgram.h"

class ExitProgramUI {
private:
    ExitProgram* control;    //ExitProgram 컨트롤 클래스

public:
    ExitProgramUI(ExitProgram* ctrl);
    void exit(std::ofstream& out_fp);
};

#endif