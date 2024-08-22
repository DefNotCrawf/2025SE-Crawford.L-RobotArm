#include "Claw.h"
#include "RGBSensor.h"

#define CLAW_PIN 3

Claw claw(CLAW_PIN);
RGBSensor rgbSensor;


void setup() {
  Serial.begin(115200);
  claw.init();
  rgbSensor.init();

  
  
  claw.open();
  delay(1500);
  claw.grab();
}

void loop() {
  claw.open();
  delay(1500);
  claw.grab();
  delay(100);
  rgbSensor.getRGB();
  delay(1500);
}


