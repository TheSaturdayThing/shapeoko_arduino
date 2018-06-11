**Grbl Versions:**
- v1.1f: GRBL_VERSION_BUILD "20170801": latest version for Shapeoko 1 converted to X-Carve with BuildLog shield
- v0.8c: older version that was used on original Shapeoko 1 with GrblShield

The recommended installation method is via the Arduino IDE:
- See: https://github.com/gnea/grbl/wiki/Compiling-Grbl
- Before starting, delete any prior Grbl library installations from the Arduino IDE. Otherwise, you'll have compiling issues!
- Manually load the grbl folder into the Arduino IDE as a Library.
  - See https://www.arduino.cc/en/guide/libraries
  - Download the **Grbl** source code ZIP file from github
  - Unpack the zip file.
  - Copy the 'grbl' directory from the **master-grbl** folder into your Arduino sketchbook's **libraries** directory. 
- Make required machine customizations to the library copy of **config.h**
  - Change CPU pin map and default settings from **DEFAULTS_GENERIC** to **DEFAULTS_X_CARVE_500MM** 
  - By default, **#define VARIABLE_SPINDLE** enables PWM spindle control, which affects pins defined in **cpu_map.h**
    - X limit input: Use Arduino pin D9
    - Y limit input: Use Arduino pin D10.
    - Z limit input: if PWM spindle control is enabled, use Arduino pin D12 instead of D11
- Launch the Arduino IDE and verify that **grbl** is shown under **Sketch -> Include Library -> Contributed libraries**
- Open the example sketch **File -> Examples -> grbl -> GrblUpload**
- Connect to the Arduino and run the sketch to compile and upload **Grbl** to the Arduino.

See https://github.com/TheSaturdayThing/shapeoko_arduino/tree/master/UGS for additional **Grbl** settings

**IMPORTANT:** The Arduino EEPROM preserves settings from any previous installs. To clear the EEPROM and enable new default settings, you can use **UGS** (Universal Gcode Sender) to access the Arduino and issue the command **$RST=***

