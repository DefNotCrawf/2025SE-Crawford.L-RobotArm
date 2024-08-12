#include "RotServo.h"

#include <Servo.h>

Servo myservo;

RotServo::RotServo(byte pin){
  this->pin = pin;
}

void RotServo::init(){
  myservo.attach(pin);
}

void RotServo::init(int initialPos){
  myservo.attach(pin);
  myservo.write(initialPos);
}