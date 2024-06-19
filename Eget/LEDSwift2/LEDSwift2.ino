const int potPin = A0;

void setup() {
  for (int pinNumber = 0; pinNumber <= 9; pinNumber++) {
    pinMode(pinNumber, OUTPUT);
    digitalWrite(pinNumber, LOW);
  }
  Serial.begin(9600);
}

void loop() {
  int potVal = analogRead(potPin);
  Serial.println(potVal);

  // Släck alla lampor
  for (int pinNumber = 0; pinNumber <= 9; pinNumber++) {
    digitalWrite(pinNumber, LOW);
  }

  // Tänd rätt lampa baserat på potVal
  int pinToLight = map(potVal, 0, 1023, 0, 10);
  if (pinToLight < 10) {
    digitalWrite(pinToLight, HIGH);
  }

  delay(50);
}
