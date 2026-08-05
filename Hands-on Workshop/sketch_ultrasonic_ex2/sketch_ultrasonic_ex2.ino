int TrigPin=11; //transmitted sound wave from the sensor
int EchoPin=12; //received sound wave to the sensor

long duration, inches, cm; //inches : variable to measure the distance in inches
                          //cm :variable to measure the distance in cm

void setup() {
  // put your setup code here, to run once:
pinMode(TrigPin,OUTPUT);
pinMode(EchoPin,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
//EMISSION OF A SOUND WAVE
digitalWrite(TrigPin,LOW);
delayMicroseconds(2); //2 microseconds or delay(0.002)
digitalWrite(TrigPin,HIGH);
delayMicroseconds(10); //10microseconds 
digitalWrite(TrigPin,LOW);

//RECEIVE OF THE REFLECTED SOUND WAVE
duration=pulseIn(EchoPin,HIGH); //measure the duration when the echo pin is HIGH

inches=microsecondsToInches(duration);
cm=microsecondsToCentimeters(duration);

Serial.print("Distance :");
Serial.print(inches);
Serial.print("in, ");
Serial.print(cm);
Serial.println("cm");
delay(1000);
}

long microsecondsToInches(long microseconds){
  return microseconds/74/2;
} //since the sounds travels approximately 74 microsecond per inch(round trip): divide by 74 then 
//by 2 for the round trip(sound from the object and back) 

long microsecondsToCentimeters(long microseconds){
  return microseconds/29/2;
} //since the sounds travels approximately 29 microsecond per cm(round trip): divide by 29 then 
//by 2 for the round trip(sound from the object and back)
