/* Simple step test for Pololu stepper motor driver carriers
This code can be used with the A4988, DRV8825, DRV8824, and
DRV8834 Pololu stepper motor driver carriers. It sends a pulse
every 500 ms to the STEP pin of a stepper motor driver that is
connected to pin 2 and changes the direction of the stepper motor
every 50 steps by toggling pin 3. */

#define STEP_PIN 2
#define DIR_PIN 5
#define LED 13
bool dirHigh;

void setup()
{
dirHigh = true;
pinMode(DIR_PIN, OUTPUT);
pinMode(STEP_PIN, OUTPUT);
pinMode(LED, OUTPUT);
digitalWrite(DIR_PIN, HIGH);
digitalWrite(STEP_PIN, LOW);
Serial.begin (9600);

}

void loop()
{
// Toggle the DIR pin to change direction.
  if
    (dirHigh)
    {
    dirHigh = false;
    digitalWrite(DIR_PIN, LOW);
    Serial.print(0);
    digitalWrite(LED, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(500);              // wait for a quarter second
    digitalWrite(LED, LOW);    // turn the LED off by making the voltage LOW
    delay(500);              //wait for a quarter second
    for(int i = 0; i < 250; i++) 
    {
    digitalWrite(STEP_PIN, HIGH);
    Serial.print (2);
    digitalWrite(LED, HIGH); 
    delay(50);
    digitalWrite(STEP_PIN, LOW); 
    digitalWrite(LED, LOW); 
    delay(50);
    }
    }
   else
    {
    dirHigh = true;
    digitalWrite(DIR_PIN, HIGH);
    Serial.print (1);
    digitalWrite(LED, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(500);              // wait for a quarter second
    digitalWrite(LED, LOW);    // turn the LED off by making the voltage LOW
    delay(500);              //wait for a quarter second
    // Step the motor 50 times before changing direction again.
    for(int i = 0; i < 250; i++) 
    {
    digitalWrite(STEP_PIN, HIGH);
    Serial.print (3);
    digitalWrite(LED, HIGH); 
    delay(50);
    digitalWrite(STEP_PIN, LOW); 
    digitalWrite(LED, LOW); 
    delay(50);
    }
    }
}
