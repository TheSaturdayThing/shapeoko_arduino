/* Y Stepper test for Pololu stepper motor driver carriers
This code can be used with the A4988, DRV8825, DRV8824, and
DRV8834 Pololu stepper motor driver carriers. It sends a pulse
every 500 ms to the STEP pin of a stepper motor driver that is
connected to pin 3 and changes the direction of the stepper motor
every 50 steps by toggling pin 6. */

#define Y_STEP 3
#define Y_DIR 6

bool dirHigh;

void setup()
{
	dirHigh = true;
	digitalWrite(Y_DIR, HIGH);
	digitalWrite(Y_STEP, LOW);
	pinMode(Y_DIR, OUTPUT);
	pinMode(Y_STEP, OUTPUT);
}

void loop()
{
	// Toggle the DIR pin to change direction.
	if(dirHigh)
	{
		dirHigh = false;
		digitalWrite(Y_DIR, LOW);
	}
	else
	{
		dirHigh = true;
		digitalWrite(Y_DIR, HIGH);
	}
	// Step the motor 50 times before changing direction again.
	for(int i = 0; i < 50; i++)
	{
	// Trigger the motor to take one step.
		digitalWrite(Y_STEP, HIGH);
		delay(250);
		digitalWrite(Y_STEP, LOW);
		delay(250);
	}
}