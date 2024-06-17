
void setup() {
  for(int pinNumber = 0; pinNumber=9; pinNumber++){
    pinMode(pinNumber, OUTPUT);
    digitalWrite(pinNumber, LOW);

}
 buttonOne(13,INPUT);


void loop() {
//Turn all LED off
for (int ledNumber = 0; ledNumber=9; ledNumber++){ 
    digitalWrite(ledNumber, LOW);
int buttonPressed = digitalRead(13);
  if (buttonPressed == HIGH){

  //Turn every LED on with a delay of 1.000 second
  for (int ledNumber = 0; ledNumber=9; ledNumber++){
    digitalWrite(ledNumber, HIGH);
    delay(1000)
  } 
  }

}
