#include <Servo.h>
int pos=0; //variable to store the servo position from 0 to 180 
Servo myServo;

void setup() {
  // put your setup code here, to run once:
myServo.attach(9); //command to create a servo object to control the servo motor
}

void loop() {
  // put your main code here, to run repeatedly:
for(pos=0;pos<=180;pos+=1){ //pos+=1 : increase the servo position by 1 degree in each iteration
  myServo.write(pos);
  delay(15);//wait 15 ms to reach each position. We can control the servo speed through the delay
}
delay (2000);

for(pos=180;pos>=0;pos-=1){//pos-=1 : decrease the servo position by 1 degree in each iteration
  myServo.write(pos);
  delay(15);
}
}
