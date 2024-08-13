#ifndef Claw_H
#define Claw_H

#include <Arduino.h>

class Claw {
private:
  byte pin;
public:
  Claw() {}  // default constructor, do not use for this case
  Claw(byte pin);

  void init();

  void range();

  /*
  void open();
  void close();
  */
};

#endif