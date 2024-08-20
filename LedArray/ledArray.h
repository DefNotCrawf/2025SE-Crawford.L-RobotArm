#ifndef ledArray_H
#define ledArray_H

#include <Arduino.h>
#include <ArduinoGraphics.h>
#include <Arduino_LED_Matrix.h>

class ledArray {
protected:
  ArduinoLEDMatrix matrix;
public:
  ledArray() {}
  ledArray(ArduinoLEDMatrix &matrix);


  void init();
  void print(const char* text);
  void printframe(const uint32_t* frame);
};

#endif