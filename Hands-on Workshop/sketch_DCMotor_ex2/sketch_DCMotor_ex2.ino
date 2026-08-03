int SpeedPin=5; //EnA (to control the motor speed)
int dir1=4;//In1 (to control the forward direction of the motor)
int dir2=3; //In2( to control backward direction of the motor)
int redled=8;
int greenled=9;

void setup() {
  // put your setup code here, to run once:
pinMode(SpeedPin,OUTPUT);
pinMode(dir1,OUTPUT);
pinMode(dir2,OUTPUT);
pinMode(redled,OUTPUT);
pinMode(greenled,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
DirectionControl();
SpeedControl();
}

void DirectionControl(){ //function to control the spinning direction of the DC Motor

analogWrite(SpeedPin,255); //set the motor to the maximum speed
digitalWrite(dir1,HIGH);
digitalWrite(dir2,LOW);
digitalWrite(greenled,HIGH);
delay (5000);

//now we change the motor's direction
digitalWrite(dir1,LOW);
digitalWrite(dir2,HIGH);
digitalWrite(greenled,LOW);
digitalWrite(redled,HIGH);
delay(5000);

//turn off the motor
digitalWrite(dir1,LOW);
digitalWrite(dir2,LOW);
digitalWrite(redled,LOW);
}

void SpeedControl (){ //function to control the DC Motor speed

//Turn on the motor forward 
digitalWrite(dir1,HIGH);
digitalWrite(dir2,LOW);

//Accelerate the motor speed in dir 1  from  0 to 255
for(int i=0; i<=255;i++){
  analogWrite(SpeedPin,i);
}
//Decelerate the motor speed in dir 1 from 255 to 0
for(int i=255; i>=0;i--){
  analogWrite(SpeedPin,i);
}

//Turn off the motor
digitalWrite(dir1,LOW);
digitalWrite(dir2,LOW);

//Turn on the motor baclward 
digitalWrite(dir1,LOW);
digitalWrite(dir2,HIGH);

//Accelerate the motor speed in dir 2  from  0 to 255
for(int i=0; i<=255;i++){
  analogWrite(SpeedPin,i);
}
//Decelerate the motor speed in dir 2 from 255 to 0
for(int i=255; i>=0;i--){
  analogWrite(SpeedPin,i);
}
}
