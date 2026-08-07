#include <Wire.h>
#include <LCD_I2C.h>

//Define the LCD
LCD_I2C lcd=LCD_I2C(0x27,16,2); //0x27 : code for using the I2C scanner ,16 : number of columns, 2: number of rows

void setup() {
  // put your setup code here, to run once:
lcd.begin(); // command to initialize the LCD 
lcd.backlight(); //command to turn on the LCD Blue backlight
}

void loop() {
  // put your main code here, to run repeatedly:
lcd.setCursor(1,0); // command will set the cursor on the second column (1) and the first row (0)
lcd.print("Hello Arduino !");
lcd.setCursor(2,1); //command will set the cursor on the third column (2) and the second row(1)
lcd.print("LCD Tutorial");
}
