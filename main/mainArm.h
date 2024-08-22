#ifndef mainArm_H
#define mainArm_H

#include <Arduino.h>
#include "Base.h"
#include "Elbow.h"
#include "Claw.h"

class mainArm {
protected:
  byte BasePin;    // Pin for the base servo
  byte Elbow1Pin;  // Pin for the elbow1 servo
  byte Elbow2Pin;  // Pin for the elbow2 servo
  byte Elbow3Pin;  // Pin for the elbow3 servo
  byte ClawPin;    // Pin for the claw servo

  Base base;     // Base servo object
  Elbow elbow1;  // Elbow1 servo object
  Elbow elbow2;  // Elbow2 servo object
  Elbow elbow3;  // Elbow3 servo object
  Claw claw;     // Claw servo object

public:
  // contructors below

  mainArm() {}  // default constructor, do not use for this case
  mainArm(byte BasePin, byte Elbow1Pin, byte Elbow2Pin, byte Elbow3Pin, byte ClawPin);
  mainArm(Base &base, Elbow &elbow1, Elbow &elbow2, Elbow &elbow3, Claw &claw);


  void init();  // initialize all servos

  void getColour();  // get colour from the sensor
  void getBlock(); // get block from preset location
};


#endif