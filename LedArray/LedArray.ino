#include "ledArray.h"

ledArray array;


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
  array.print("v0.4.1");
  delay(50);
  array.print("multi-line");
  delay(50);
  array.print("v");


  // Serial.println("\nOOP TEST");
  // array.print("OOP TEST");
}

void loop() {
  array.printframe(animation);
  array.printframe(animation2);
}