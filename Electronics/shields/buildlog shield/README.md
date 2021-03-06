## BuildLog Stepper Shield
http://www.buildlog.net/blog/2011/08/stepper-driver-arduino-shield/

http://www.buildlog.net/wiki/doku.php?id=elec:4xshield

__Also see the following for the Rev 3.X board artwork:__

"The stepper shield appears to have an error in labeling (for boards labeled "rev 3"), since the two pins directly above the left of the "DY" label have to be left blank in order to work. Instead, the pins above the "A" label need to be connected. 

Note, rev 3.01: boards that read "rev 3.01" have the silkscreen error corrected. On this board, adding two jumpers over the "DY" label at JMP5 will properly put the fourth axis in Dual Y mode.

https://www.shapeoko.com/wiki/index.php/Dual_Motor#Instructions_for_Buildlog_Stepper_Shield_rev.3

## Wiring
When wiring the BuildLog terminal blocks to the steppers, use the following convention:
(Pin 1 is on the left of the block, wire pairs are 1A/1B and 2A/2B)

Driver | Shield | Pin | Color
--- | --- | --- | ---
A~ | 1B | 1 | White
A | 1A | 2 | Red
B | 2A | 3 | Green
B~ | 2B | 4 | Black

This is different than the gShield naming and order
(Pin 1 is on the left of the block, wire pairs are A1/A2 and B1/B2)

Driver | Shield | Pin | Color
--- | --- | --- | ---
A | A1 | 1 | Red
A~ | A2 | 2 | White
B | B1| 3 | Green
B~ | B2 | 4 | Black

## Stepper enable/disable
* The BuildLog Shield manual lists some code changes for Grbl __stepper.c__. These are for code version 0.9 and are not required for 1.1 since the signal name and polarity has already been changed from __STEPPERS_ENABLE_BIT__ to __STEPPERS_DISABLE_BIT__
