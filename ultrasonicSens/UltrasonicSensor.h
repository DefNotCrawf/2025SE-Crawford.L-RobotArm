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

  int MAX_DISTANCE = 16; // Maximum distance for the sensor

  // NewPing sonar = Newping(trigPin, echoPin, MAX_DISTANCE);
  
  NewPing sonar(byte trigPin, byte echoPin, int MAX_DISTANCE); // NewPing object

  
public:
  // public methods here
  UltrasonicSensor(){} // Default constructor, do not use
  UltrasonicSensor(byte trigPin, byte echoPin); // Constructor w/ trig and echo pins
  UltrasonicSensor(NewPing &sonar); // Constructor w/ NewPing object

  void init();
  void measureDistance();
};


#endif