void setup() {
  for(int i=7; i<13; i++)
    pinMode(i, OUTPUT);
  Serial.begin(9600);
  pinMode(4,INPUT);
}

void loop() {
  for(int i=7; i<13; i++) {
    digitalWrite(i,1);
    delay(500);
    digitalWrite(i,0);
  }
}
