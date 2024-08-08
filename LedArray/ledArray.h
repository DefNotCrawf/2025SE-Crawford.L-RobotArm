#ifndef ledArray_H
#define ledArray_H

#include <Arduino.h>

class ledArray{
private:

public:
  ledArray() {}
  
  void init();
  void print(const char text);
};

#endif