#define STEP_PIN 2
#define DIR_PIN 5

bool dirHigh;

void setup()
{
digitalWrite(DIR_PIN, HIGH);
digitalWrite(STEP_PIN, LOW);
pinMode(DIR_PIN, OUTPUT);
pinMode(STEP_PIN, OUTPUT);
}

void loop()
{
  
}

