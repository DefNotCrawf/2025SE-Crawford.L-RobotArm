#include "UltrasonicSensor.h"

#define TRIG_P 6
#define ECHO_P 5



UltrasonicSensor ultraSensor(TRIG_P, ECHO_P);

void setup(){
  Serial.begin(115200);
  ultraSensor.init();
}

void loop(){
  // code here
  ultraSensor.measureDistance();
}