#ifndef EXITPROGRAM_H
#define EXITPROGRAM_H

// ExitProgram.h
class ExitProgram {
private:
    bool* isProgramExit;

public:
    ExitProgram(bool* isProgramExit);
    void doExit();
};

#endif