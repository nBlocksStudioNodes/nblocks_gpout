#ifndef __NB_GPOUT
#define __NB_GPOUT

#include "nworkbench.h"



class nBlock_GPOUT: public nBlockNode {
public:
    nBlock_GPOUT(PinName pinOut, PinMode  modeString, int preset);
    void triggerInput(uint32_t inputNumber, uint32_t value);
private:
    DigitalInOut _out;
    PinMode  _mode;
    int _preset;
};




#endif





