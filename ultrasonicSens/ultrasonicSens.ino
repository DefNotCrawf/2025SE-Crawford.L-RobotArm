#include "UltrasonicSensor.h"

UltrasonicSensor ultraSensor(6, 5);

void setup(){
  Serial.begin(115200);
  ultraSensor.init();
}

void loop(){
  // code here
  ultraSensor.measureDistance();
}