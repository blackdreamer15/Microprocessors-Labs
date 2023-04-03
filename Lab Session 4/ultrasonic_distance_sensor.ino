int distance = 0;
int photoDiode = 0;

long readUltrasonicDistance(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);  // Clear the trigger
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  // Sets the trigger pin to HIGH state for 10 microseconds
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  // Reads the echo pin, and returns the sound wave travel time in microseconds
  return pulseIn(echoPin, HIGH);
}

void setup()
{
  pinMode(11, OUTPUT);
  Serial.begin(9600);

  digitalWrite(11, HIGH);
}

void loop()
{
  distance = 0.01723 * readUltrasonicDistance(3, 5);
  Serial.println(distance);
  delay(50); // Wait for 50 millisecond(s)
  if (distance > 113) {
    digitalWrite(11, HIGH);
    delay(5); // Wait for 5 millisecond(s)
  } else {
    digitalWrite(11, LOW);
    delay(5); // Wait for 5 millisecond(s)
  }
}