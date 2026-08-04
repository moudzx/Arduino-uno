int waterSensor = A0;
int redLed = 8;
int greenLed = 9;
int buzzer=5;

void setup() {

  pinMode(greenLed, OUTPUT);
  pinMode(redLed, OUTPUT);
  Serial.begin(9600);
}

void loop() {

  int waterValue = analogRead(waterSensor);
  Serial.println(waterValue);

  if (waterValue > 450) { //450 can be changed regarding each sensor

    digitalWrite(redLed, HIGH);
    digitalWrite(greenLed, LOW);
    Serial.println("WATER DETECTED");
    tone(buzzer,2000,500);
  } 
  
  else {

    digitalWrite(redLed, LOW);
    digitalWrite(greenLed, HIGH);
    Serial.println("NO WATER DETECTED");

  }
  Serial.println("---------------------------------");

  delay(500);
}