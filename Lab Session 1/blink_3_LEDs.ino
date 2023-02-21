int redLED = 8;
int yellowLED = 12;
int greenLED = 13;

void blinkLED(int pin, int time);

void setup()
{
  pinMode(redLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
}

void loop()
{
  blinkLED(redLED, 500);
  blinkLED(yellowLED, 500);
  blinkLED(greenLED, 500);
}

void blinkLED(int pin, int time) {
  digitalWrite(pin, HIGH);
  delay(time);
  digitalWrite(pin, LOW);
  delay(time);
}