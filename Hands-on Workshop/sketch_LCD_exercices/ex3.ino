#include <LCD_I2C.h>
#include <Wire.h>

LCD_I2C lcd=LCD_I2C(0x27,16,2);

void setup() {
  // put your setup code here, to run once:
lcd.begin();
lcd.backlight();
}

void loop() {
  // put your main code here, to run repeatedly:
lcd.setCursor(16,0);
lcd.autoscroll();

String sentence="Welcome to Arduino World";
for(int i=0;i<=23;i++){ //23 characters in the sentence including the space
  lcd.print(sentence[i]);
  delay(500);
}
}
