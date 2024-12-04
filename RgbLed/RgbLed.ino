int redPin=11;
int greenPin=10;
int bluePin=9;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(redPin,OUTPUT);
pinMode(greenPin,OUTPUT);
pinMode(bluePin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(redPin,HIGH);
  digitalWrite(greenPin,LOW);
  digitalWrite(bluePin,LOW);
  delay(1000);
  digitalWrite(redPin,LOW);
  digitalWrite(greenPin,HIGH);
  digitalWrite(bluePin,LOW);
delay(1000);
  digitalWrite(redPin,LOW);
  digitalWrite(greenPin,LOW);
  digitalWrite(bluePin,HIGH);
delay(1000);
  digitalWrite(redPin,LOW);
  analogWrite(greenPin,255);
  analogWrite(bluePin,80);
delay(1000);
digitalWrite(redPin,LOW);
  digitalWrite(greenPin,LOW);
  digitalWrite(bluePin,LOW);
  delay(1000);
}
