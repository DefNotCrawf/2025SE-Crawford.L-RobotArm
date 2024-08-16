#include "Claw.h"

Claw::Claw(Servo &myservo) {
  this->myservo = myservo;
}

Claw::Claw(byte pin) {
  this->pin = pin;
}

void Claw::init() {
  myservo.attach(pin);
}

void Claw::range() /* move between all available range */ {
  for (int i = 125; i <= 165; i++) {
    myservo.write(i);
    Serial.print("cPos:\t");
    Serial.println(i);
    if (isOpen()) {
      Serial.println("cPos:\topen");
    } else {
      Serial.println("cPos:\tclosed");
    }
    delay(100);
  }
  delay(250);
}

void Claw::open() /* Pos 125 */ {
  myservo.write(122);
}

void Claw::close() /* Pos 170 */ {
  myservo.write(170);
}

void Claw::grab() /* Pos  */ {
  myservo.write(142);
}

bool Claw::isOpen() {
  if (myservo.read() <= 160 /* Simple tolerance for now */) {
    return true;
  } else {
    return false;
  }
}

void Claw::randPos() /* random movements */ {
  unsigned int r = random(125, 165);
  myservo.write(r);
}