#include <NewPing.h>

int TrigPin=11;
int EchoPin=12;
int maxdistance=400;//the maximum distance read by the sensor is 400 cm or 4m

//define the ultrasonic sensor with the sonar command that takes 3 inputs : trig,echo, max distance
NewPing sonar(TrigPin,EchoPin,maxdistance);

int redled=5;
int greenled=6;
int buzzer=7;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(TrigPin,OUTPUT);
pinMode(EchoPin,INPUT);
pinMode(redled,OUTPUT);
pinMode(greenled,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int distance=sonar.ping_cm();//sonar.ping_cm() comand that calculate the distance in cm using the new ping library
Serial.print("The distance is:");
Serial.print(distance); 
Serial.println( "cm");
delay(1000);

if(distance<=10){
  digitalWrite(greenled,LOW);
  digitalWrite(redled,HIGH);
  delay(100);
  digitalWrite(redled,LOW);
  delay(100);
  //tone(buzzer,2000,500);
  Serial.println("YOU WILL HIT THE WALL!!");
} else{
  digitalWrite(greenled,HIGH);
  Serial.println("SAFE PARKING");
}
}
