Versions:
- v1.1f: GRBL_VERSION_BUILD "20170801": latest version installed on Shapeoko 1 converted to X-Carve with BuildLog shield
- v0.8c: older version used on original Shapeoko 1 with GrblShield

Note on XYZ limit switches:
By default PWM spindle control is enabled, so Z limit is now on pin D12 instead of D11.
X and Y Limit continue to be on pins D9 and D10.

From Defaults.h:

// Enables variable spindle output voltage for different RPM values. On the Arduino Uno, the spindle
// enable pin will output 5V for maximum RPM with 256 intermediate levels and 0V when disabled.
// NOTE: IMPORTANT for Arduino Unos! When enabled, the Z-limit pin D11 and spindle enable pin D12 switch!
// The hardware PWM output on pin D11 is required for variable spindle output voltages.
#define VARIABLE_SPINDLE // Default enabled. Comment to disable.
