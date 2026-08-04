int greenled=7;
int redled=6;
int buzzer=5;
int FlameSensor=8;

void setup() {
  // put your setup code here, to run once:
pinMode(greenled,OUTPUT);
pinMode(redled,OUTPUT);
pinMode(FlameSensor,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int Value=digitalRead(FlameSensor);

if(Value==0){ //VALUE = 0 : FIRE DETECTED
digitalWrite(greenled,LOW);
digitalWrite(redled,HIGH);
delay(200);
digitalWrite(redled,LOW);
delay(200);
tone(buzzer,2000,500);
Serial.println("Warning !! Fire detected !!");
}
else{
  digitalWrite(greenled,HIGH);
  Serial.println("No fire detected");
}
delay(1000);
}
