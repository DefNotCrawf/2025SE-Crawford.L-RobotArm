#include "Claw.h"

#include <Servo.h>

Servo myservo;

Claw::Claw(byte pin) {
  this->pin = pin;
}

void Claw::init() {
  myservo.attach(pin);
}

void Claw::range() {
  for (int i = 0; i <= 180; i++) {
    myservo.write(i);
    Serial.print("cPos:");
    Serial.println(i);
    delay(750);
  }
}