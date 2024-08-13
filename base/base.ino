#include "Base.h"

const byte BASE_PIN = 3;

Base base(BASE_PIN);


void setup() {
  Serial.begin(115200);
  Serial.println("bPos:90");
  base.init();
  // base.begin();
  delay(3000);
}

void loop() {
  /* 
    Below is a range test. It cycles through the entire theoretical range of the servo.
  */
  int i = 0;
  for (i = 0; i <= 180; i++) {
    base.moveTo(i);
    Serial.print("bPos:");
    Serial.println(i);
    delay(500);
  };
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
