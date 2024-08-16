#include "Base.h"

Base::Base(Servo &myservo) {
  this->myservo = myservo;
}

Base::Base(byte pin) {
  this->pin = pin;
}

void Base::init() {
  myservo.attach(pin);
}

void Base::init(int initialPos) {
  myservo.attach(pin);
  myservo.write(initialPos);
  delay(50);
}

void Base::begin() {
  myservo.write(startPos);
  delay(50);
}

void Base::moveTo(int Pos) {
  myservo.write(Pos);
  delay(50);
}

int Base::currPos(){
  myservo.read();
}