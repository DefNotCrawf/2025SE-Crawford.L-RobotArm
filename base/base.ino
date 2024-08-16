#include "Base.h"

#define BASE_PIN 3

Base base(BASE_PIN);


void setup() {
  Serial.begin(115200);
  Serial.println("bPos:90");
  base.init();
  // base.begin();
  base.moveTo(0);
  delay(2000);
}

void loop() {
  /* 
    Below is a range test. It cycles through the entire theoretical range of the servo.
  */

  for (int r = 0; r <= 180; r += 45) {
    base.moveTo(r);
    Serial.println(base.currPos());
    delay(1000);
  }

  base.moveTo(0);
  delay(2000);

  /* 
    Random Positions.
  */
  // unsigned int randNumber = random(0, 180);
  // base.moveTo(randNumber);  
  // Serial.print("bPos:"); Serial.println(base.currPos());  // bPos:X
  // delay(1500);

  // Serial.println(randNumber);
  // delay(50);
}
