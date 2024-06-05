#include <Servo.h>
Servo myServo;

int potVal;
int angle;

void setup() {
  // put your setup code here, to run once:
  myServo.attach(9);
  Serial.begin(9600);
  
  

}

void loop() {

  // put your main code here, to run repeatedly:
  for (int potVal = 179; potVal  < 1023; potVal += 100) {
        
  Serial.print("  PortVal: \t ");
  Serial.print(potVal);  
  angle = map(potVal, 0 , 1023, 0 ,179);
 

  myServo.write(angle);
  
   delay(1500);
  }

  
  
} 
