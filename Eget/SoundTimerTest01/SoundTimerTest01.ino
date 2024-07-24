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

  int person1Button = digitalRead(personOne);
  int person2Button = digitalRead(personTwo);
  int person3Button = digitalRead(personThree);

  if (person1Button == HIGH){
    whoIsIt = 1;
  }
  else if(person2Button == HIGH){
    whoIsIt = 2;
  }
  else if(person3Button == HIGH ){
    whoIsIt = 0;
  }

  if (whoIsIt == 1){
    message = "Person One";
  }
  else if (whoIsIt == 2){
    message = "Person Two";
  }
  else if (whoIsIt == 0){
    message = "Neutral";
  }
  Serial.println(message);
}
