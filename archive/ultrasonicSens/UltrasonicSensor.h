#ifndef UltrasonicSensor_H
#define UltrasonicSensor_H

#include <Arduino.h>
#include <NewPing.h>

class UltrasonicSensor { // Class for the Ultrasonic Sensor
protected:
  // instantiate object here
  byte trigPin; // Trigger pin
  byte echoPin; // Echo pin
  float duration; // Time taken for the wave to return
  float distance; // Distance from the object

public:
  // public methods here
  NewPing radar = NewPing(trigPin, echoPin); // NewPing object

  
  UltrasonicSensor(){} // Default constructor, do not use
  UltrasonicSensor(byte trigPin, byte echoPin); // Constructor w/ trig and echo pins
  UltrasonicSensor(NewPing &radar); // NewPing constructor

  void init();
  long measureDistance();
};


#endif