#include "gpout.h"

/// GPOUT
nBlock_GPOUT::nBlock_GPOUT(PinName pinOut, const char * modeString): _out(pinOut) {
    _mode = modeString; //  a pointer to this constant string
    _out.output();  //setup as output
    _out.mode(*_mode); //set mode as PullUp/PullDown/PullNone/OpenDrain
    return;
}
void nBlock_GPOUT::triggerInput(uint32_t inputNumber, uint32_t value) {
    _out = (value)? 1 : 0;
}




