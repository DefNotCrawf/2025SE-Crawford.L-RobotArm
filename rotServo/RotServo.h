#ifndef RotServo_H
#define RotServo_H

#include <Arduino.h>

class RotServo {
private:
  byte pin;
public:
  RotServo() {} // default constructor, do not use for this case
  RotServo(byte pin);
  
  void init();
  void init(int initialPos);
};

#endif