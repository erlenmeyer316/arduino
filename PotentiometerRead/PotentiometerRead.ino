int readPin=A0;
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

void loop() {

  int sensorValue = analogRead(readPin);
  // print out the value you read:
  Serial.println(sensorValue);
  delay(100);  // delay in between reads for stability
}
