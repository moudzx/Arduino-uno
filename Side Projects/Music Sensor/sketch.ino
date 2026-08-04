const int soundAnalogPin = A0;
const int soundDigitalPin = 2; 

const int yellowLED = 8;       
const int greenLED  = 9;     
const int blueLED   = 10;     
const int redLED    = 11;  

const int buzzerPin = 12;     


const int threshold1 = 46; 
const int threshold2 = 49; 
const int threshold3 = 54; 
const int threshold4 = 57; 

void setup() {
  
  pinMode(yellowLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(blueLED, OUTPUT);
  pinMode(redLED, OUTPUT);
  pinMode(buzzerPin, OUTPUT);

 
  pinMode(soundAnalogPin, INPUT);
  pinMode(soundDigitalPin, INPUT);

 
  Serial.begin(9600);
}

void loop() {
 
  int soundValue = analogRead(soundAnalogPin);
  
  
  Serial.print("Sound Level: ");
  Serial.println(soundValue);


  digitalWrite(yellowLED, LOW);
  digitalWrite(greenLED, LOW);
  digitalWrite(blueLED, LOW);
  digitalWrite(redLED, LOW);
  noTone(buzzerPin);


  if (soundValue >= threshold1) {
    digitalWrite(yellowLED, HIGH); 
  }
  if (soundValue >= threshold2) {
    digitalWrite(greenLED, HIGH);  
  }
  if (soundValue >= threshold3) {
    digitalWrite(blueLED, HIGH);   
  }
  if (soundValue >= threshold4) {
    digitalWrite(redLED, HIGH);   
    tone(buzzerPin, 1000);       
  }

  delay(50); 
}
