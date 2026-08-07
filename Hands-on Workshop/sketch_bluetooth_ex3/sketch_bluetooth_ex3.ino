#include <Servo.h>
#include <SoftwareSerial.h> //library for the terminale mode with bluetooth

int redled=3;
int greenled=5;
Servo myServo;

char Data;
SoftwareSerial Bluetooth(0,1);

void sendData(String transmitData){ //function to send the data from the application to the module
  Bluetooth.println(transmitData);
}

void setup() {
  // put your setup code here, to run once:
pinMode(redled,OUTPUT);
pinMode(greenled,OUTPUT);
myServo.attach(9);
Bluetooth.begin(9600); //display data on the application 
}

void loop() {
  // put your main code here, to run repeatedly:
if(Bluetooth.available()){
  Data=Bluetooth.read();

  if(Data==('1')){
    digitalWrite(greenled,HIGH);
    digitalWrite(redled,LOW);
    myServo.write(90);
    sendData("green led turned ON and the door is opened");
  }

  if(Data==('2')){
    digitalWrite(redled,HIGH);
    digitalWrite(greenled,LOW);
    myServo.write(0);
    sendData("red led turned ON and the door is closed");
  }
  }
}
