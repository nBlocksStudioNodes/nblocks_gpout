#include "gpout.h"

/// GPOUT
nBlock_GPOUT::nBlock_GPOUT(PinName pinOut, PinMode  modeString, int preset): _out(pinOut) {
    _mode = modeString; //  a pointer to this constant string
    _out.output();  //setup as output
    _out.mode(_mode); //set mode as PullUp/PullDown/PullNone/OpenDrain
    _preset = preset;
    _out = _preset;
    return;
}
void nBlock_GPOUT::triggerInput(nBlocks_Message message) {
    _out = (message.intValue)? 1 : 0;
}




