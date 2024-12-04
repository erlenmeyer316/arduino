int timeUnit = 100;
int arduinoPin = 12;
int index = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT); 
  pinMode(arduinoPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  char message[] = "Help! I've fallen and I can't get up";
  Serial.print(">>> BEGIN TRANSMISSION <<<");
  Serial.println();
  encodeMessage(message, arduinoPin);
  Serial.println();
  Serial.print("<<< TRANSMISSION COMPLETE >>>");
  Serial.println();
  Serial.println();
  delay(1000);
}

void encodeMessage(char* message, int pin){
  char * word;
  word = strtok (message, " ");
  while (word != NULL)
  {
    encodeWord(word, pin);
    word = strtok (NULL, " ");
    if(word != NULL){
      space();
    }
  }
}


void encodeWord(char * word, int pin){
  int currLetter = 0;
  while(currLetter < strlen(word)){
    char c = word[currLetter];
    encodeLetter(c, pin);
    currLetter++;
    if(currLetter < strlen(word)){
      betweenLetters();
    }
  }
}

void encodeLetter(char c, int pin){
  switch(tolower(c)){
    case 'a':
      a(pin);
      Serial.print("a");
      break;
    case 'b':
      b(pin);
      Serial.print("b");
      break;
    case 'c':
      letterC(pin);
      Serial.print("c");
      break;      
    case 'd':
      d(pin);
      Serial.print("d");
      break;
    case 'e':
      e(pin);
      Serial.print("e");
      break;
    case 'f':
      f(pin);
      Serial.print("f");
      break;
    case 'g':
      g(pin);
      Serial.print("g");
      break;            
    case 'h':
      h(pin);
      Serial.print("h");
      break;
    case 'i':
      i(pin);
      Serial.print("i");
      break;
    case 'j':
      j(pin);
      Serial.print("j");
      break;
    case 'k':
      k(pin);
      Serial.print("k");
      break;
    case 'l':
      l(pin);
      Serial.print("l");
      break;
    case 'm':
      m(pin);
      Serial.print("m");
      break;
    case 'n':
      n(pin);
      Serial.print("n");
      break;                                    
    case 'o':
      o(pin);
      Serial.print("o");
      break;
    case 'p':
      p(pin);
      Serial.print("p");
      break;
    case 'q':
      q(pin);
      Serial.print("q");
      break;
    case 'r':
      r(pin);
      Serial.print("r");
      break;                  
    case 's':
      s(pin);
      Serial.print("s");
      break;
    case 't':
      t(pin);
      Serial.print("t");
      break;
    case 'u':
      u(pin);
      Serial.print("u");
      break;
    case 'v':
      v(pin);
      Serial.print("v");
      break;
    case 'w':
      w(pin);
      Serial.print("w");
      break;
    case 'x':
      x(pin);
      Serial.print("x");
      break;
    case 'y':
      y(pin);
      Serial.print("y");
      break;
    case 'z':
      z(pin);
      Serial.print("z");
      break;                                    
    default:
      //Serial.print("*");
      break;
  }
}

void a(int pin){
  dit(pin);
  interElement();
  dah(pin);
}

void b(int pin){
  dah(pin);
  interElement();
  dit(pin);
  interElement();
  dit(pin);
  interElement();
  dit(pin);
}

void letterC(int pin){
  dah(pin);
  interElement();
  dit(pin);
  interElement();
  dah(pin);
  interElement();
  dit(pin);
}

void d(int pin){
  dah(pin);
  interElement();
  dit(pin);
  interElement();
  dit(pin);
} 

void e(int pin){
  dit(pin);
}

void f(int pin){
  dit(pin);
  interElement();
  dit(pin);
  interElement();
  dah(pin);
  interElement();
  dit(pin);
}

void g(int pin){
  dah(pin);
  interElement();
  dah(pin);
  interElement();
  dit(pin);
  
}

void h(int pin){
  dit(pin);
  interElement();
  dit(pin);
  interElement();
  dit(pin);
  interElement();
  dit(pin);
}


void i(int pin){
  dit(pin);
  interElement();
  dit(pin);
}


void j(int pin){
  dit(pin);
  interElement();
  dah(pin);
  interElement();
  dah(pin);
  interElement();
  dah(pin);
}


void k(int pin){
  dah(pin);
  interElement();
  dit(pin);
  interElement();
  dah(pin);
}


void l(int pin){
  dit(pin);
  interElement();
  dah(pin);
  interElement();
  dit(pin);
  interElement();
  dit(pin);
}


void m(int pin){
  dah(pin);
  interElement();
  dah(pin);
}


void n(int pin){
  dah(pin);
  interElement();
  dit(pin);
}

void o(int pin){
  dah(pin);
  interElement();
  dah(pin);
  interElement();
  dah(pin);
}

void p(int pin){
  dit(pin);
  interElement();
  dah(pin);
  interElement();
  dah(pin);
  interElement();
  dit(pin);
}

void q(int pin){
  dah(pin);
  interElement();
  dah(pin);
  interElement();
  dit(pin);
  interElement();
  dah(pin);
}

void r(int pin){
  dit(pin);
  interElement();
  dah(pin);
  interElement();
  dit(pin);
}

void s(int pin){
  dit(pin);
  interElement();
  dit(pin);
  interElement();
  dit(pin);
}

void t(int pin){
  dah(pin);
}

void u(int pin){
  dit(pin);
  interElement();
  dit(pin);
  interElement();
  dah(pin);
}
void v(int pin){
  dit(pin);
  interElement();
  dit(pin);
  interElement();
  dit(pin);
  interElement();
  dah(pin);
}
void w(int pin){
  dit(pin);
  interElement();
  dah(pin);
  interElement();
  dah(pin);
}
void x(int pin){
  dah(pin);
  interElement();
  dit(pin);
  interElement();
  dit(pin);
  interElement();
  dah(pin);
}
void y(int pin){
  dah(pin);
  interElement();
  dit(pin);
  interElement();
  dah(pin);
  interElement();
  dah(pin);
}
void z(int pin){
  dah(pin);
  interElement();
  dah(pin);
  interElement();
  dit(pin);
  interElement();
  dit(pin);
}


void dit(int pin){
 // Serial.print("dit");
  digitalWrite(pin, HIGH);
  delay(timeUnit);
  digitalWrite(pin, LOW);
}

void dah(int pin){
//  Serial.print("dah");
  digitalWrite(pin, HIGH);
  delay((timeUnit * 3));
  digitalWrite(pin, LOW);
}

void interElement(){
//  Serial.print("`");
  delay(timeUnit);
}

void betweenLetters(){
//  Serial.print("`");
  delay((timeUnit * 3));
}

void space(){
  Serial.print(" ");
  delay((timeUnit * 7));
}
