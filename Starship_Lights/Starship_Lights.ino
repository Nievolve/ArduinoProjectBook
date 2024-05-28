void setup() {
  pinMode(3, OUTPUT); // Green
  pinMode(4, OUTPUT);  // Red One
  pinMode(5, OUTPUT); // Red Two
  pinMode(2, INPUT); //Button
 

}

void loop() {
  int switch_state  = digitalRead(2); // Read button INPUT

  if (switch_state == LOW){
    digitalWrite(3, HIGH); // Green is on
    digitalWrite(4, LOW); // Red One is off
    digitalWrite(5, LOW); // Red Two is off
    
  }
  else {
    digitalWrite(3, LOW); // Green is off
    digitalWrite(4, HIGH); // Red One is on
    digitalWrite(5, LOW); // Red Two is off

    delay(250);
    digitalWrite(3, LOW); // Green is off
    digitalWrite(4, LOW); // Red One is off
    digitalWrite(5, HIGH); // Red Two is on
    delay(250);
      }
  }
