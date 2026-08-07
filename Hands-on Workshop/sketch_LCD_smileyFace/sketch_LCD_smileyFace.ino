#include <LCD_I2C.h>
#include <Wire.h>

LCD_I2C lcd=LCD_I2C(0x27,16,2);

byte smileface[8]={
  0b00000,
  0b01010,
  0b01010,
  0b00000,
  0b10001,
  0b01110,
  0b00000,
};

byte sadface[8]={
  0b00000,
  0b01010,
  0b01010,
  0b00000,
  0b01110,
  0b10001,
  0b00000,
};

byte midface[8]={
  0b00000,
  0b01010,
  0b01010,
  0b00000,
  0b00000,
  0b11111,
  0b00000,
};

void setup() {
  // put your setup code here, to run once:
lcd.begin();
lcd.backlight();
//define the 3 characters
lcd.createChar(1,smileface); //lcd.createChar(number of the char, name of the charac)
lcd.createChar(2,sadface);
lcd.createChar(3,midface);
}

void loop() {
  // put your main code here, to run repeatedly:
lcd.setCursor(6,0);
lcd.write(1); //command to dispaly the character with its number 1 : smiley face

lcd.setCursor(7,0);
lcd.write(2);

lcd.setCursor(8,0);
lcd.write(3);
}
