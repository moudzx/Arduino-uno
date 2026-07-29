#include <Servo.h>

Servo s;

void setup() {
  s.attach(9);   // PWM pin
}

void loop() {
  s.write(0);
  delay(500);

  s.write(90);
  delay(500);

  s.write(180);
  delay(500);
  // Servo angle range is 0° to 180°
}
