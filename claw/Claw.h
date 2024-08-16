#ifndef Claw_H
#define Claw_H

#include <Arduino.h>
#include <Servo.h>


class Claw {
private:
  byte pin;

  Servo myservo;
public:
  Claw() {}  // default constructor, do not use for this case
  Claw(Servo &myservo);
  Claw(byte pin);

  void init();

  void range(); // move between all available range

  void open(); // Pos 125
  void close(); // Pos 170
  void grab(); // 

  bool isOpen(); // returns True if open, else retruns false

  void randPos(); // random movements
};

#endif