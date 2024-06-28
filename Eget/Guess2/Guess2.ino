int const potPin = A0;
int const button = 10;
int const soundPin = 11;

int startState;
long randomNumber;
long rightNumberLow;
long rightNumberHigh;
int player;
int set;
int k;
int w;
int off;

void setup() {
    for (int x = 2; x <= 9; x++) {
        pinMode(x, OUTPUT);
    }
    pinMode(10, INPUT);

  
Serial.begin(9600);
}

void loop() {
    startState = digitalRead(button);
    randomNumber = random(50, 973);
    rightNumberLow = randomNumber - 50;
    rightNumberHigh = randomNumber + 50;
    Serial.println("Random nuber is :");
    Serial.println(randomNumber);
    Serial.println("Random number high is: ");
    Serial.println(rightNumberHigh);
    Serial.println("Random number low is: ");
    Serial.println(rightNumberLow);
    if (startState == HIGH) {
        for (set = 0; set <= 5; set++) { // 5 Rounds
            
            for (k = 2; k <= 6; k++) {
                delay(1000);
                digitalWrite(k, HIGH);
                Serial.println("Player is: ");
                Serial.println(player);
            }
            for (off=2;off<=6;off++){
              digitalWrite(off,LOW);
            }
            player = analogRead(potPin);
            if (player >= rightNumberLow && player <= rightNumberHigh) {
                for (w = 0; w <= 6; w++) {
                    digitalWrite(7, HIGH);
                    delay(250);
                    digitalWrite(7, LOW); // Turn off the LED after delay
                }
                // End game
                break;
            } else if (player < rightNumberLow) {
                for (w = 0; w <= 6; w++) {
                    digitalWrite(8, HIGH);
                    delay(175);
                    digitalWrite(8, LOW); // Turn off the LED after delay
                    delay(175);
                }
            } else if (player > rightNumberHigh) {
                for (w = 0; w <= 6; w++) {
                    digitalWrite(9, HIGH);
                    delay(175);
                    digitalWrite(9, LOW); // Turn off the LED after delay
                    delay(175);
                }
            }
        }
        tone(soundPin, 1000,1000);
        delay(500);
    }
}
