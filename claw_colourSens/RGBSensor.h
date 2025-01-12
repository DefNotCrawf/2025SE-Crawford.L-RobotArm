#ifndef RGBSensor_H
#define RGBSensor_H

#include <Arduino.h>
#include "Adafruit_TCS34725.h"

class RGBSensor {
protected:
  // instantiate object here
  Adafruit_TCS34725 tcs = Adafruit_TCS34725(TCS34725_INTEGRATIONTIME_50MS, TCS34725_GAIN_4X); // TCS34725 RGB colour sensor
  byte gammatable[256]; // RGB -> eye-recognized gamma color
  float red, green, blue; // RGB values
public:
  // public methods here
  RGBSensor(){} // constructor
  RGBSensor(Adafruit_TCS34725 &tcs);

  void init(); // initialise sensor
  void getRGBraw(); // get raw RGB values
  void getRGB(); // get overall colour

};


#endif