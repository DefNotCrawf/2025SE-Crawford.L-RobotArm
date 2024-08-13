#include "Claw.h"

const byte CLAW_PIN = 11;

Claw claw(CLAW_PIN);

void setup() {
  Serial.begin(115200);
  claw.init();
}

void loop() {
  claw.range();
}
