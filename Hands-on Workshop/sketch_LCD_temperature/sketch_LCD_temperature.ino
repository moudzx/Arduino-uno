#include <SimpleDHT.h>
#include <LCD_I2C.h>
#include <Wire.h>

//DEFINE THE LCD
LCD_I2C lcd=LCD_I2C(0x27,16,2);
//DEFINE THE DHT SENSOR
int pinDHT11=7;
SimpleDHT11 dht11(pinDHT11);

void setup() {
  // put your setup code here, to run once:
lcd.begin();
lcd.backlight();
}

void loop() {
  // put your main code here, to run repeatedly:
byte temperature;
byte humidity;
//to read the temp and humidity from the sensor
dht11.read(&temperature,&humidity,NULL);

lcd.setCursor(0,0);
lcd.print("Temperature:");
lcd.print(temperature);
lcd.print((char)223);  

lcd.setCursor(0,1);
lcd.print("Humidity:");
lcd.print(humidity);
lcd.print("%");

delay(2000);

}
