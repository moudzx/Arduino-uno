int photoresistor=A0;
int led=9; //led should be connected to a PWM pin

void setup() {
  // put your setup code here, to run once:
pinMode(led,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int SensorValue=analogRead(photoresistor);
Serial.print("Sensor Value : ");
Serial.println(SensorValue);
delay(1000);
if(SensorValue<137){
  LEDControl(SensorValue);
}else{
  digitalWrite(led,LOW);
}
}

void LEDControl(int reference){ //reference=sensor value

int intensity = abs(137-reference)+ 134; //intensity = (threshold - reference) + min value
// we add the min value to the sensor in case the sensor value (reference) was equal to the max value
// to make sure we have a signal for the LED
//my threshold is 140(max)+ 134(min)/2=137
if(intensity>255){
  intensity=255;
}
analogWrite(led,intensity);
Serial.print("Intensity Value : ");
Serial.println(intensity);
}
