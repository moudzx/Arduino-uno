int led=3; //the led shlould be connected on a PWM pin
char inChar; //char type variable to save the data/readings/signals from the bluetooth
int intensity=50; //variable to control the light intensity using PWM signals

void setup() {
  // put your setup code here, to run once:
pinMode(led,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available()){ //if receiving the data from the bluetooth device
  inChar=Serial.read(); //Serial.read : command to read and save the data from the bluetooth module
  Serial.println(inChar);
}
if(inChar=='O'){
    analogWrite(led,255);//turn on the led with a full brightness
}
else if(inChar=='F'){
  analogWrite(led,0);// turn off the led
}
else if(inChar=='I'){ //command to increase the light intensity
intensity+=25; //increasing the light intensity of 25
if(intensity>255) intensity=255;
analogWrite(led,intensity);
}
else if(inChar=='D'){ //command to decrease the light intensity
intensity-=25;
if (intensity<5) intensity=25;
analogWrite(led,intensity);
}
inChar='1'; //to change reading inChar variable 
}
