#include <Servo.h>
int potentiometer=A0;
Servo myServo;

void setup() {
  // put your setup code here, to run once:
myServo.attach(9);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int value=analogRead(potentiometer);
int angle=map(value,0,1023,0,180); //scale to use with the servo to convert the readings of the potentiometer from 0 to 1023 into angles between 0 and 180 degrees
                                   //0 = 0 degrees and 1023 = 180 degrees
myServo.write(angle);
delay(15); //wait 15ms for the servo to get the position

Serial.print("Potentiometer reading : ");
Serial.println(value);
Serial.print("Corresponding angle : ");
Serial.println(angle);
Serial.println("--------------------------------------------");
delay(1000);
}
