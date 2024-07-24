const int StartPin = 2;
const int EndPin = 3;
const int personOne = 4;
const int personTwo = 5;
const int personThree = 6;

unsigned long whoIsIt = 0; // 0=Neutral 1=Person1 2=Person2
String message = "DEFAULT"; // Använd String istället för char

void setup() {
  pinMode(StartPin, INPUT);
  pinMode(EndPin, INPUT);
  pinMode(personOne, INPUT);
  pinMode(personTwo, INPUT);
  pinMode(personThree, INPUT);
  Serial.begin(9600);
}

void loop() {
  if (digitalReadzpersonOne) == HIGH) {
    message = "Person One";
  }
  
   else {
    message = "DEFAULT1";
  }
  Serial.println(message);
}
