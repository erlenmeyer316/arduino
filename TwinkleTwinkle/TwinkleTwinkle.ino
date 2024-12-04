int buzzerPin = 8;
int switchPin = 6;
byte buttonPresses = -1;                 
byte lastPressCount = -1;
    
int TwinkleTwinkler[] = {523,523,784,784,440,440,784,698,698,659,659,587,587,523,784,784,698,698,659,659,587,784,784,698,698,659,659,587,523,523,784,784,440,440,784,698,698,659,659,587,587,523};

void setup() {
  pinMode(buzzerPin, OUTPUT);
  pinMode(switchPin, INPUT_PULLUP);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop() {
if (digitalRead(switchPin) == LOW)  // check if button was pressed
  {
    buttonPresses++;  // increment buttonPresses count
    delay(250);       // debounce switch
    if (buttonPresses == 42) buttonPresses = 0;         // rollover every fourth second press
  }
  
  if (lastPressCount != buttonPresses)              // only do output if the count has changed
  {
    tone(buzzerPin, TwinkleTwinkler[buttonPresses]);
    delay(250);
    noTone(buzzerPin);
    
    lastPressCount = buttonPresses;    // track last press count
  }
  

}
