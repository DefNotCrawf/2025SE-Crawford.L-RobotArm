#include "Base.h"

#include <Servo.h>

Servo myservo;

Base::Base(byte pin) {
  this->pin = pin;
}

void Base::init() {
  myservo.attach(pin);
}

void Base::init(int initialPos) {
  myservo.attach(pin);
  myservo.write(initialPos);
}

void Base::begin() {
  myservo.write(startPos);
}

void Base::moveTo(int Pos) {
  myservo.write(Pos);
}

int Base::currPos(){
  myservo.read();
}