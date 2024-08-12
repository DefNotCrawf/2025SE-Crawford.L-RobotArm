#include "ledArray.h"

ledArray array;

const uint32_t arrow_left[] = {
  0x400c01c,
  0x3fc3fc1,
  0xcc0cc04c,
  66
};

const uint32_t arrow_right[] = {
  0x2003003,
  0x83fc3fc3,
  0x38330320,
  66
};

const uint32_t animation[] = {
  0xaaa555aa,
  0xa555aaa5,
  0x55aaa555,
  66
};

const uint32_t animation2[] = {
  0x555aaa55,
  0x5aaa555a,
  0xaa555aaa,
  66
};

void setup() {
  Serial.begin(9600);
  array.init();

  // Serial.println("\nv0.1.0");
  array.print("v0.2.1 - OOP TEST");

  // Serial.println("\nOOP TEST");
  // array.print("OOP TEST");
}

void loop() {
  array.printframe(animation);
  delay(200);
  array.printframe(animation2);
  delay(200);
}