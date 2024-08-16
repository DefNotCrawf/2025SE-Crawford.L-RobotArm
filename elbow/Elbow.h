#ifndef Elbow_H
#define Elbow_H

#include <Arduino.h>
#include <Servo.h>

class Elbow {
private:
  int pin;

  Servo myservo;

  const int startPos = 90;
public:
  Elbow() {}  // default constructor, do not use for this case
  Elbow(Servo &myservo);
  Elbow(int pin);

  void init();

  void angle(int Pos);

  void range();

  void reset();
};

#endif