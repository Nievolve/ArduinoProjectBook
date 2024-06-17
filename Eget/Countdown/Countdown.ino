
void setup() {
  for(int pinNumber = 2; pinNumber<12; pinNumber++){
    pinMode(pinNumber, OUTPUT);
    digitalWrite(pinNumber, LOW);

}
 buttonOne(13,INPUT);


void loop() {

int buttonPressed = digitalRead(13);
  if (buttonPressed == HIGH){

  
  for (int ledNumber = 1; ledNumber<=12; ledNumber++){
    digitalWrite(ledNumber, HIGH);
    delay(1000)
  } 
  }

}
