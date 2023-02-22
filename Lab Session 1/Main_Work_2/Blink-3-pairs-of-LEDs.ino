int redLED = 13;
int yellowLED = 12;
int greenLED = 8;

void blinkLED(int pin, int time);

void setup()
{
  pinMode(redLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
}

void loop()
{
  blinkLED(redLED, 5000);
  blinkLED(yellowLED, 2000);
  blinkLED(greenLED, 3000);
}

void blinkLED(int pin, int time) {
  digitalWrite(pin, HIGH);
  delay(time);
  digitalWrite(pin, LOW);
  delay(time);
}