#include "Claw.h"

const byte CLAW_PIN = 11;

Claw claw(CLAW_PIN);

void setup() {
  Serial.begin(115200);
  claw.init();
  claw.open();
  delay(1500);
  claw.close();
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
