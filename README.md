# n-Blocks Studio GPOUT Node #
## Output Node with 4 possible modes PullUp,PullDown,PullNone,OpenDrain

This node is a general Purpose Output : it transmits the input to the outputPin with no changes, in the following frame.  
The difference from GPO Node is:  
 1. The output pin mode is configurable as as PullUp, PullDown, PullNone, OpenDrain. 
 2. Parameter Preset controls the preset value to 1 or 0  
 
The underneath mbed API is DigitalInOut.  
  
Author: Nikos Chalikias


