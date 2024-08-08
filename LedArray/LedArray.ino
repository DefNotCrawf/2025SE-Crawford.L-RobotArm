#include "ledArray.h"

ledArray array();

void setup() {
  Serial.begin(9600);
  Serial.print("123");
  array.init();
  array.print("v0.1.0");
}

void loop() {
}