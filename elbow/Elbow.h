#ifndef Elbow_H
#define Elbow_H

#include <Arduino.h>

class Elbow1 {
private:
  

  const int startPos = 90;
public:
  int _pin;
  
  Elbow1() {}  // default constructor, do not use for this case
  Elbow1(int pin);

  void init();
  void init(int initialPos);

  void angle(int Pos);

  void range();

  void reset();
};

class Elbow2 {
private:
  

  const int startPos = 90;
public:
  int pin;
  
  Elbow2() {}  // default constructor, do not use for this case
  Elbow2(int pin);

  void init();
  void init(int initialPos);

  void angle(int Pos);

  void range();

  void reset();
};

class Elbow3 {
private:
  

  const int startPos = 90;
public:
  int pin;
  
  Elbow3() {}  // default constructor, do not use for this case
  Elbow3(int pin);

  void init();
  void init(int initialPos);

  void angle(int Pos);

  void range();

  void reset();
};
#endif