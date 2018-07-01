Pololu A4988 Carrier (Black Edition)
https://www.pololu.com/product/2128

__Note that boards purchased before January 2017 use a 50 mOhm sense resistor (two green chips).
Newer boards have a 68 mOhm value (two white chips) which which makes more of the current adjustment potentiometer’s range useful.__

https://github.com/TheSaturdayThing/shapeoko_arduino/blob/master/Electronics/Stepper%20Controller/Pololu/sense%20resistors.jpg

Using the formula for full stepping and 50 mOhms:
* VREF= 8 * 1.4 * IMAX * RCS
* For 1.2 amp drive:
  * 8 * 1.4 * (1.2) * (0.050) = __0.672 Volts__

Using the formula for __2X__ or __8X__ microstepping and 50 mOhms:
* VREF= 8 * 1.0 * IMAX * RCS
* For 1.0 amp drive:
  * 8 * 1.0 * (1.0) * (0.050) = __0.400 Volts__
