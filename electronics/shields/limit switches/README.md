**Notes:** 

* **X-Carve build instructions have the limit switches wired as 'NO" (Normally Open). Since the Arduino pins have internal pullups, they will have a '1' input until a switch is hit and the pin is grounded to '0'.**
* **Grbl coordinates are in _negative_ space! See https://github.com/gnea/grbl/wiki/Frequently-Asked-Questions**
* **Grbl's homing cycle assumes you have set up axes directions correctly. So on a standard mill, this means the positive directions for each axis is:** 
  * **Z-axis spindle moves up**
  * **Y-axis table moves toward you (or carriage moves away)**
  * **X-axis table moves to the left (or carriage moves to the right).**
* **See the 'Right Hand Rule' for coordinates: http://linuxcnc.org/docs/html/user/user-concepts.html#_machine_configurations**

Optoisolator built on an Adafruit Proto Shield

References: 

Circuit: 

https://github.com/gnea/grbl/wiki/Wiring-Limit-Switches

Photocoupler: 

http://optoelectronics.liteon.com/en-global/Led/LED-Component/Detail/658

Shield:

https://www.adafruit.com/product/2077

https://github.com/adafruit/Adafruit-Proto-Shield-PCB




