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

  void range(); // move between all available range

  void open(); // Pos 125
  void close(); // Pos 165

  bool isOpen(); // returns True if open, else retruns false

  void randPos(); // random movements
};

#endif