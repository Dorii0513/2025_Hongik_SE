#ifndef EXIT_PROGRAM_UI_H
#define EXIT_PROGRAM_UI_H

#include <fstream>
#include "ExitProgram.h"

class ExitProgramUI {
private:
    ExitProgram* control;

public:
    ExitProgramUI(ExitProgram* ctrl);
    void exit(std::ofstream& out_fp);
};

#endif