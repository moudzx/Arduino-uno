int SpeedPin=5; //EnA : pin used to control the speed of the DC Motor using PWM signal
int dir1=4; //In1: pin used to control the direction of the DC Motor : Forward
int dir2=3; //In2: pin used to control the direction of the DC Motor : Backward
int MotorSpeed=150; //constant motor speed (motor starts to spin at a minimum speed of 100RPS)

void setup() {
  // put your setup code here, to run once:
pinMode(SpeedPin,OUTPUT);
pinMode(dir1,OUTPUT);
pinMode(dir2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

//Turn on the motor with controlling spinning direction 1 : forward or clockwise
digitalWrite(dir1,HIGH);
digitalWrite(dir2,LOW);
analogWrite(SpeedPin,MotorSpeed); //command to turn the motor with inputs speed pin and the motor speed
delay(5000);

digitalWrite(dir1,LOW);
digitalWrite(dir2,LOW);
delay(2000);

//Turn on the motor with controlling spinning direction 2 : backward or anti-clockwise
digitalWrite(dir1,LOW);
digitalWrite(dir2,HIGH);
analogWrite(SpeedPin,MotorSpeed); //command to turn the motor with inputs speed pin and the motor speed
delay(5000);

digitalWrite(dir1,LOW);
digitalWrite(dir2,LOW);
delay(2000);
}