const int button1Pin = 2; // Person 1
const int button2Pin = 3; // Person 2
const int button3Pin = 4; // Neutral
const int stopButtonPin = 5; // Stop

unsigned long startTime; //Use this var so after program starts and millis ticks when StartButton is pressed (green button)
                         //this goes minus current time. So if program starts and we wait 3 seconds to press green button.
                         //then (Millis) is 3000 and this var is 3000. So either it subtracts 3000 directly or after stopButton
                         //is pressed
unsigned long lastTime;
unsigned long person1Time = 0;
unsigned long person2Time = 0;
unsigned long neutralTime = 0;

int currentSpeaker = 0; // 0 = none, 1 = person1, 2 = person2, 3 = neutral

void setup() {
  pinMode(button1Pin, INPUT);
  pinMode(button2Pin, INPUT);
  pinMode(button3Pin, INPUT);
  pinMode(stopButtonPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(stopButtonPin) == HIGH) {
    // Stop and display results
    displayResults();
    while (1); // Halt
  }

  int button1State = digitalRead(button1Pin);
  int button2State = digitalRead(button2Pin);
  int button3State = digitalRead(button3Pin);

  unsigned long currentTime = millis();

  // Check if button for person 1 is pressed
  if (button1State == HIGH) {
    updateTime(currentTime);
    currentSpeaker = 1;
    lastTime = currentTime;
  }
  // Check if button for person 2 is pressed
  else if (button2State == HIGH) {
    updateTime(currentTime);
    currentSpeaker = 2;
    lastTime = currentTime;
  }
  // Check if neutral button is pressed
  else if (button3State == HIGH) {
    updateTime(currentTime);
    currentSpeaker = 3;
    lastTime = currentTime;
  }
}

void updateTime(unsigned long currentTime) {
  if (currentSpeaker == 1) {
    person1Time += (currentTime - lastTime);
  } else if (currentSpeaker == 2) {
    person2Time += (currentTime - lastTime);
  } else if (currentSpeaker == 3) {
    neutralTime += (currentTime - lastTime);
  }
}

void displayResults() {
  Serial.print("Person 1 time: ");
  Serial.print(person1Time / 1000);
  Serial.println(" seconds");
  
  Serial.print("Person 2 time: ");
  Serial.print(person2Time / 1000);
  Serial.println(" seconds");
  
  Serial.print("Neutral time: ");
  Serial.print(neutralTime / 1000);
  Serial.println(" seconds");
}
