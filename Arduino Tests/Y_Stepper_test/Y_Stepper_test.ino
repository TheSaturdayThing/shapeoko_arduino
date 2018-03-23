

#define STEP_Y 3
#define DIR_Y 6

#define LED 13
bool dirHigh;

void setup()
{
dirHigh = true;
pinMode(DIR_Y, OUTPUT);
pinMode(STEP_Y, OUTPUT);
pinMode(LED, OUTPUT);
digitalWrite(DIR_Y, HIGH);
digitalWrite(STEP_Y, LOW);
Serial.begin (9600);

}

void loop()
{
// Toggle the DIR pin to change direction.
  if
    (dirHigh)
    {
    dirHigh = false;
    digitalWrite(DIR_Y, LOW);
    Serial.print(0);
    digitalWrite(LED, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(500);              // wait for a quarter second
    digitalWrite(LED, LOW);    // turn the LED off by making the voltage LOW
    delay(500);              //wait for a quarter second
    for(int i = 0; i < 250; i++) 
    {
    digitalWrite(STEP_Y, HIGH);
    Serial.print (2);
    digitalWrite(LED, HIGH); 
    delay(50);
    digitalWrite(STEP_Y, LOW); 
    digitalWrite(LED, LOW); 
    delay(50);
    }
    }
   else
    {
    dirHigh = true;
    digitalWrite(DIR_Y, HIGH);
    Serial.print (1);
    digitalWrite(LED, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(500);              // wait for a quarter second
    digitalWrite(LED, LOW);    // turn the LED off by making the voltage LOW
    delay(500);              //wait for a quarter second
    // Step the motor 50 times before changing direction again.
    for(int i = 0; i < 250; i++) 
    {
    digitalWrite(STEP_Y, HIGH);
    Serial.print (3);
    digitalWrite(LED, HIGH); 
    delay(50);
    digitalWrite(STEP_Y, LOW); 
    digitalWrite(LED, LOW); 
    delay(50);
    }
    }
}
