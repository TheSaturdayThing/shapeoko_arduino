**Notes:** 
* **Grbl coordinates are in _negative_ space! See https://github.com/gnea/grbl/wiki/Frequently-Asked-Questions**
  * **See the 'Right Hand Rule' for coordinates: http://linuxcnc.org/docs/html/user/user-concepts.html#_machine_configurations**
* **X-Carve build instructions have the limit switches wired as 'NO" (Normally Open). Since the Arduino pins have internal pullups, they will have a '1' input until a switch is hit and the pin is grounded to '0'.**
* **It's a very common mistake when users test their hard limit switches and see that Grbl triggers a hard limit alarm. They assume that this means their limit switches are wired correctly. NOT TRUE. The Arduino AVR processor does not tell you what state the limit pin is in and which pin triggered (more advanced processors do tell you this). So, Grbl will trigger a hard limit upon any change in pin state. So, if you have your limit switches inverted somehow, you will have issues with the homing cycle.**
* **Homing:** 
  * **Grbl's homing cycle assumes you have set up axes directions correctly. So on a standard mill, this means the positive directions for each axis is:** 
    * **Z-axis spindle moves up**
    * **Y-axis table moves toward you (or carriage moves away)**
    * **X-axis table moves to the left (or carriage moves to the right).**
    * **If an axis is reversed you can either change the direction in the Grbl settings or rewire the motor.**
  * **If it's not moving in the expected direction when you start the homing cycle and then it stops after a short distance (about 2.5 times $27 pull-off distance), then you likely have electrical interference problems. Grbl has detected your limit switch as triggered due the noise and skipped to the pull-off motion phase of the homing cycle. You will need to add noise filtering and shielding to your limit switches**
  
**Filtering Circuit**

Optoisolator built on an Adafruit Proto Shield

References: 

Circuit: 

https://github.com/gnea/grbl/wiki/Wiring-Limit-Switches

Photocoupler: 

http://optoelectronics.liteon.com/en-global/Led/LED-Component/Detail/658

Shield:

https://www.adafruit.com/product/2077

https://github.com/adafruit/Adafruit-Proto-Shield-PCB

**Notes**
* Connector wiring

| Pin | Signal | Color |
| --- | ------ | ----- |
| 1 | common | black |
| 2 | signal | red |
| 3 | shield | silver |

* Pin 1 of the connector is marked with an arrow, however because the power and shield are both connected to ground on the board, the connector is reversible.

* Arduino signal wiring

| Pin | Signal | Color |
| --- | ------ | ----- |
| D9 | X-limit| red |
| D10 | Y-limit | yellow |
| D12 | Z-limit | blue |

* There is a jumper on the shield that connects the input side of the optoisolators to the Arduino +5VDC supply. Optionally the jumper could be switched to a separate +5V source in order to provide full isolation of inputs from the Arduino circuitry.
* Originally the 4-pin DIP parts were socketed, but there was not enough retention force so they were soldered directly to the PCB.
* In addition to the three limit switches, there is a fourth connector for an (optional) external reset switch (active low to reset). This signal is not optically isolated since the wiring will be short and within the control box, so the grounded shield should give adequate noise protection.
