/* Z Stepper test for Pololu stepper motor driver carriers
This code can be used with the A4988, DRV8825, DRV8824, and
DRV8834 Pololu stepper motor driver carriers. It sends a pulse
every 500 ms to the STEP pin of a stepper motor driver that is
connected to pin 4 and changes the direction of the stepper motor
every 50 steps by toggling pin 7. */

#define Z_STEP 4
#define Z_DIR 7

bool dirHigh;

void setup()
{
	dirHigh = true;
	digitalWrite(Z_DIR, HIGH);
	digitalWrite(Z_STEP, LOW);
	pinMode(Z_DIR, OUTPUT);
	pinMode(Z_STEP, OUTPUT);
}

void loop()
{
	// Toggle the DIR pin to change direction.
	if(dirHigh)
	{
		dirHigh = false;
		digitalWrite(Z_DIR, LOW);
	}
	else
	{
		dirHigh = true;
		digitalWrite(Z_DIR, HIGH);
	}
	// Step the motor 50 times before changing direction again.
	for(int i = 0; i < 50; i++)
	{
	// Trigger the motor to take one step.
		digitalWrite(Z_STEP, HIGH);
		delay(250);
		digitalWrite(Z_STEP, LOW);
		delay(250);
	}
}