BuildLog Stepper Shield

http://www.buildlog.net/blog/2011/08/stepper-driver-arduino-shield/

http://www.buildlog.net/wiki/doku.php?id=elec:4xshield

Also see the following for the Rev 3.X board artwork:

"The stepper shield appears to have an error in labeling (for boards labeled "rev 3"), since the two pins directly above the left of the "DY" label have to be left blank in order to work. Instead, the pins above the "A" label need to be connected. 

Note, rev 3.01: boards that read "rev 3.01" have the silkscreen error corrected. On this board, adding two jumpers over the "DY" label at JMP5 will properly put the fourth axis in Dual Y mode.

https://www.shapeoko.com/wiki/index.php/Dual_Motor#Instructions_for_Buildlog_Stepper_Shield_rev.3

When wiring the terminal blocks to the steppers, use the following convention:
(Pin 1 is on the left of the block)

Driver | Shield | Pin | Color
--- | --- | --- | ---
A~ | 1B | 1 | White
A | 1A | 2 | Red
B | 2A | 3 | Green
B~ | 2B | 4 | Black
