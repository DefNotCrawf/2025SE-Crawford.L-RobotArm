#include "mainArm.h"

#define BASE_PIN 10
#define ELBOW1_PIN 9
#define ELBOW2_PIN 6
#define ELBOW3_PIN 5
#define CLAW_PIN 3


mainArm arm = mainArm(BASE_PIN, ELBOW1_PIN, ELBOW2_PIN, ELBOW3_PIN, CLAW_PIN);


void setup() {
  Serial.begin(115200);
  arm.init();
  delay(500);
  arm.getBlock();
  delay(2000);
  arm.getColour();
}

void loop() {
}