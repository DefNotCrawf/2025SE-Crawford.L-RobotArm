#include "Elbow.h"

Elbow::Elbow(Servo &myservo) {
  this->myservo = myservo;
}

Elbow::Elbow(byte pin) {
  this->pin = pin;
}

void Elbow::init() {
  myservo.attach(pin);
}

void Elbow::angle(int Pos) {
  myservo.write(Pos);
  delay(50);
}

void Elbow::range() {
  int i = 0;
  do {
    myservo.write(i);
    Serial.print("ePos:\t");
    Serial.println(i);
    i++;
    delay(100);
  } while (i <= 180);
}

void Elbow::reset() {
  myservo.write(90);
  delay(50);
}
