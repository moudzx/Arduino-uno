//LED Pins:
  //LED1 -> Pin 6
  //LED2 -> Pin 7
  //LED3 -> Pin 8
  //LED4 -> Pin 9
  //LED5 -> Pin 10

  //Bluetooth Commands:

  //a -> LED1 ON
  //b -> LED1 OFF

  //c -> LED2 ON
  //d -> LED2 OFF

  //e -> LED3 ON
  //f -> LED3 OFF

  //g -> LED4 ON
  //h -> LED4 OFF

  //i -> LED5 ON
  //j -> LED5 OFF

  //m -> ALL LEDs ON
  //n -> ALL LEDs OFF


#include <SoftwareSerial.h>

// Bluetooth RX, TX
SoftwareSerial bluetooth(2, 3);

// LED Pins
const int LED1 = 6;
const int LED2 = 7;
const int LED3 = 8;
const int LED4 = 9;
const int LED5 = 10;

char command;

void setup() {

  Serial.begin(9600);
  bluetooth.begin(9600);

  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);

  // Initially OFF
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, LOW);

  Serial.println("BlueBot LED Controller Ready");
}

void loop() {

  if (bluetooth.available()) {

    command = bluetooth.read();

    Serial.print("Command Received: ");
    Serial.println(command);

    // LED1
    if (command == 'a') {
      digitalWrite(LED1, HIGH);
    }
    else if (command == 'b') {
      digitalWrite(LED1, LOW);
    }

    // LED2
    else if (command == 'c') {
      digitalWrite(LED2, HIGH);
    }
    else if (command == 'd') {
      digitalWrite(LED2, LOW);
    }

    // LED3
    else if (command == 'e') {
      digitalWrite(LED3, HIGH);
    }
    else if (command == 'f') {
      digitalWrite(LED3, LOW);
    }

    // LED4
    else if (command == 'g') {
      digitalWrite(LED4, HIGH);
    }
    else if (command == 'h') {
      digitalWrite(LED4, LOW);
    }

    // LED5
    else if (command == 'i') {
      digitalWrite(LED5, HIGH);
    }
    else if (command == 'j') {
      digitalWrite(LED5, LOW);
    }

    // ALL LEDs ON
    else if (command == 'm') {
      digitalWrite(LED1, HIGH);
      digitalWrite(LED2, HIGH);
      digitalWrite(LED3, HIGH);
      digitalWrite(LED4, HIGH);
      digitalWrite(LED5, HIGH);
    }

    // ALL LEDs OFF
    else if (command == 'n') {
      digitalWrite(LED1, LOW);
      digitalWrite(LED2, LOW);
      digitalWrite(LED3, LOW);
      digitalWrite(LED4, LOW);
      digitalWrite(LED5, LOW);
    }
  }
}
