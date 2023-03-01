int LedPin = 2;

void analogWriteForBlinking(int inputPinNum, int time_secs) {
    analogWrite(inputPinNum, 255);
    delay(time_secs);

    analogWrite(inputPinNum, 0);
    delay(time_secs);
}

void setup() {
	pinMode(LedPin, OUTPUT);
}

void loop() {
	analogWriteForBlinking(LedPin, 500);
}