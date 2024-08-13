#ifndef Base_H
#define Base_H

#include <Arduino.h>

class Base {
private:
  byte pin;

  const int startPos = 90;
public:
  Base() {}  // default constructor, do not use for this case
  Base(byte pin);

  void init();
  void init(int initialPos);

  void begin();

  void moveTo(int Pos);

  int currPos();
};

#endif