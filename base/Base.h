#ifndef Base_H
#define Base_H

#include <Arduino.h>
#include <Servo.h>


class Base {
protected:
  int pin;

  Servo myservo;

  const int startPos = 90;
public:
  Base() {}  // default constructor, do not use for this case
  Base(Servo &myservo);
  Base(byte pin);

  void init();
  void init(int initialPos);

  void begin();

  void moveTo(int Pos);

  int currPos();
};

#endif