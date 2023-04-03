const unsigned int redLED = 4;
const unsigned int switchPin = 2;
int buttonState = 0;
int oldButtonState = LOW;
int ledState = LOW;

void setup()
{
  pinMode(switchPin, INPUT);
  pinMode(redLED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  buttonState = digitalRead(switchPin);
	
  if(ledState == HIGH) {
    Serial.println("Red LED is on.");
  }
  else {
    Serial.println("Red LED is off.");
  }
  
  if (buttonState != oldButtonState && buttonState == HIGH) {
    ledState = (ledState == LOW ? HIGH : LOW);
    
    digitalWrite(redLED, ledState);
    delay(50);
  }
  oldButtonState = buttonState;
}