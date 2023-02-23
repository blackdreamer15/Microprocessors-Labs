int buzzer1 = 13;
int buzzer2 = 12;
int buzzer3 = 8;

void generateTone(int pin, int frequency, int time);

void setup()
{
  pinMode(buzzer1, OUTPUT);
  pinMode(buzzer2, OUTPUT);
  pinMode(buzzer3, OUTPUT);
}

void loop()
{
  generateTone(buzzer1, 100, 500);
  generateTone(buzzer2, 500, 500);
  generateTone(buzzer3, 900, 500);
}

void generateTone(int pin, int frequency, int time) {
tone(pin, frequency);
  	delay(time);
  	noTone(pin);
  	delay(time);
}