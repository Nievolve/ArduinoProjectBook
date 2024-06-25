int buttonPressed = 0;        // Variabel för att lagra knappen's status
void setup() {
  for (int pinNumber = 2; pinNumber <= 12; pinNumber++) {
    pinMode(pinNumber, OUTPUT); //Set up LED
    digitalWrite(pinNumber, LOW); // Turn all off
   
  }
  pinMode(13, INPUT); //Button
  Serial.begin(9600);
}

void loop() {
  
  for (int ledNumber = 2; ledNumber <=12; ledNumber++){ 
    digitalWrite(ledNumber, LOW);
    Serial.print(ledNumber);
  }
  buttonPressed = digitalRead(13);
  if (buttonPressed == HIGH){
    

  //Turn every LED on with a delay of 1.000 second
  for (int ledNumber = 2; ledNumber <= 12; ledNumber++){
    digitalWrite(ledNumber, HIGH);
    
    delay(1000);
    digitalWrite(ledNumber, LOW);
    
  }
  for (int blinking = 0; blinking <=5; blinking++){
  for (int ledNumber = 2; ledNumber <= 12; ledNumber++){
    digitalWrite(ledNumber, HIGH);
    delay (5);
  
  }
    for (int ledNumber = 2; ledNumber <= 12; ledNumber++){
    digitalWrite(ledNumber, LOW);
    delay (5);
    }
  }
  }
  }
