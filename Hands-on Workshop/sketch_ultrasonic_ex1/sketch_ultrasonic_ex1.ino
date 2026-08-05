int TrigPin=11; //transmitted sound wave from the sensor
int EchoPin=12; //received sound wave to the sensor
int duration, distance;

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
delay(0.002); //2 microseconds
digitalWrite(TrigPin,HIGH);
delay(0.001);
digitalWrite(TrigPin,LOW);

//RECEIVE OF THE REFLECTED SOUND WAVE
duration=pulseIn(EchoPin,HIGH); //measure the duration when the echo pin is HIGH
distance = duration*0.034/2; //distance = speed of sound x duration /2 (we divide 2 for the round trip of the wave)
//sound speed = 340m/s or 34cm/s or 0.034cm/ms 

Serial.print("Distance :");
Serial.print(distance);
Serial.println(" cm");
delay(1000);
}
