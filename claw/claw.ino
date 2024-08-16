#include "Claw.h"

#define CLAW_PIN 10

Claw claw(CLAW_PIN);

void setup() {
  Serial.begin(115200);
  claw.init();
  claw.open();
  delay(1500);
  claw.grab();
}

void loop() {
  // claw.range();
  // if (claw.isOpen()) {
  //   Serial.println("cPos:\topen");
  // } else {
  //   Serial.println("cPos:\tclosed");
  // }
  // delay(500);
}
