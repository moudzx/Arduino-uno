void setup() {
  for (int i = 7; i < 13; i++)
    pinMode(i, OUTPUT);
  Serial.begin(9600);
  pinMode(4, INPUT);
}

void loop() {
  if (digitalRead(4)) {
    while (digitalRead(4));
    randomSeed(analogRead(0));
    int rand = random(1, 7);
    dd();
    ddd(rand);
  }
}

void dd() {

  for (int i = 7; i < 13; i++) {
    digitalWrite(i, 1);
    delay(200);
    digitalWrite(i, 0);
  }

  for (int i = 12; i >=7; i--) {
    digitalWrite(i, 1);
    delay(200);
    digitalWrite(i, 0);
  }
}

void ddd(int n){
  
  for(int i=7; i< 7+n; i++){
    digitalWrite(i,1);
  }
  
  delay(3000);
  
  for(int i=7; i<7+n ; i++){
    digitalWrite(i,0);
  }
}
