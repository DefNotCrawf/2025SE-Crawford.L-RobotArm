#include "mainArm.h"
#include "RGBSensor.h"


#define BASE_PIN 10
#define ELBOW1_PIN 9
#define ELBOW2_PIN 6
#define ELBOW3_PIN 5
#define CLAW_PIN 3

RGBSensor rgbSensor;
mainArm arm = mainArm(BASE_PIN, ELBOW1_PIN, ELBOW2_PIN, ELBOW3_PIN, CLAW_PIN);


void setup() {
  Serial.begin(115200);
  arm.init();
  rgbSensor.init();
  delay(2000);
  arm.getBlock();
  delay(1000);
  arm.getColour();
  delay(1000);
  rgbSensor.getRGB();
}

void loop() {
}