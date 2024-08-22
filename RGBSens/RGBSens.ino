#include "RGBSensor.h"

RGBSensor rgbSensor;
void setup() {
  Serial.begin(115200);
  rgbSensor.init();
}

void loop() {
  rgbSensor.getRGBraw();
}