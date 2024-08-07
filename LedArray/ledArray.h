#ifndef ledArray_H
#define ledArray_H

#include <Arduino.h>

class ledArray{
private:

public:
  ledArray() {};
  ledArray(thisString);

  String thisString = String(
    "v0.1.0"
  );

  void print();
};

#endif