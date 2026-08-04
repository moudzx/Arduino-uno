#include <SimpleDHT.h>

int pinDHT11=7; //INITIALIZE THE SENSOR PIN 
SimpleDHT11 dht11(pinDHT11); // DEFINE THE SENSOR AND ITS PIN

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
byte temperature;
byte humidity;
dht11.read(&temperature,&humidity,NULL); //NULL: code requirement if the sensor does not read any value

Serial.print("Temperature :");
Serial.print(temperature);
Serial.println("°C"); //ALT +248
Serial.print("Humidity :");
Serial.print(humidity);
Serial.println("%");
Serial.println("-------------------------------------");
delay(2000); 
}
