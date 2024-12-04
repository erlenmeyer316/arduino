int buzzerPin = 8;
int switchPin = 6;
byte buttonPresses = 0;                 
byte lastPressCount = 0;    
int ANotes[] = {5,6,33,34};
int CNotes[] = {1,2,14,29,30,42};
int DNotes[] = {12,13,21,28,40,41};
int ENotes[] = {10,11,19,20,26,27,38,39};
int FNotes[] = {8,9,17,18,24,25,36,37};
int GNotes[] = {3,4,7,15,16,22,23,31,32,35};

void setup() {
  pinMode(buzzerPin, OUTPUT);
  pinMode(switchPin, INPUT_PULLUP);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop() {
if (digitalRead(switchPin) == LOW)  // check if button was pressed
  {
    buttonPresses++;                  // increment buttonPresses count
    delay(250);                       // debounce switch
  }
  
  if (lastPressCount != buttonPresses)              // only do output if the count has changed
  {
    int x = 0;

    // A 
    for (x=0; x<(sizeof(ANotes)/sizeof(int)); x=x+1){
      if (ANotes[x] == buttonPresses){
        tone(buzzerPin, 440);
        delay(250);
        noTone(buzzerPin);
        //delay(250);
        x = (sizeof(ANotes)/sizeof(int)); // force end of array check
      }
    }

    // C
    for (x=0; x<(sizeof(CNotes)/sizeof(int)); x=x+1){
      if (CNotes[x] == buttonPresses){
        tone(buzzerPin, 523);
        delay(250);
        noTone(buzzerPin);
        //delay(250);
        x = (sizeof(CNotes)/sizeof(int)); // force end of array check
      }
    }


    // D
    for (x=0; x<(sizeof(DNotes)/sizeof(int)); x=x+1){
      if (DNotes[x] == buttonPresses){
        tone(buzzerPin, 587);
        delay(250);
        noTone(buzzerPin);
        //delay(250);
        x = (sizeof(DNotes)/sizeof(int)); // force end of array check
      }
    }    

    
    // E
    for (x=0; x<(sizeof(ENotes)/sizeof(int)); x=x+1){
      if (ENotes[x] == buttonPresses){
        tone(buzzerPin, 659);
        delay(250);
        noTone(buzzerPin);
        //delay(250);
        x = (sizeof(ENotes)/sizeof(int)); // force end of array check
      }
    }

    // F
    for (x=0; x<(sizeof(FNotes)/sizeof(int)); x=x+1){
      if (FNotes[x] == buttonPresses){
        tone(buzzerPin, 698);
        delay(250);
        noTone(buzzerPin);
        //delay(250);
        x = (sizeof(FNotes)/sizeof(int)); // force end of array check
      }
    }

    // G
    for (x=0; x<(sizeof(GNotes)/sizeof(int)); x=x+1){
      if (GNotes[x] == buttonPresses){
        tone(buzzerPin, 784);
        delay(250);
        noTone(buzzerPin);
        //delay(250);
        x = (sizeof(GNotes)/sizeof(int)); // force end of array check
      }
    }
    
    lastPressCount = buttonPresses;    // track last press count
  }
  
  if (buttonPresses > 42) buttonPresses = 1;         // rollover every fourth press
}
