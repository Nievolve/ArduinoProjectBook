int buttonPressed = 0;        // Variabel för att lagra knappen's status
void setup() {
  for (int pinNumber = 0; pinNumber <= 9; pinNumber++) {
    pinMode(pinNumber, OUTPUT); //Set up LED
    digitalWrite(pinNumber, LOW); // Turn all off
   
  }
  pinMode(13, INPUT); //Button
  Serial.begin(9600);
}

void loop() {
  for (int ledNumber = 0; ledNumber <=9; ledNumber++){ 
    digitalWrite(ledNumber, LOW);
  Serial.print(digitalWrite(0);
  
  Serial.print(digitalWrite(1);
  buttonPressed = digitalRead(13);
  if (buttonPressed == HIGH){
    

  //Turn every LED on with a delay of 1.000 second
  for (int ledNumber = 0; ledNumber <= 9; ledNumber++){
    digitalWrite(ledNumber, HIGH);
    
    delay(1000);
    digitalWrite(ledNumber, LOW);
    
  }

  }
  }
}
