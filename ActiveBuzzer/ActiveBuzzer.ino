int buzzerPin = 8;
int buttonPin = 6;

void setup() {
  pinMode(buzzerPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(13, OUTPUT);
}

void loop() {
  int buttonState = digitalRead(buttonPin);

  if (buttonState == LOW) {
    digitalWrite(buzzerPin, HIGH);
  }

  if (buttonState == HIGH) {
    digitalWrite(buzzerPin, LOW);
  }
}