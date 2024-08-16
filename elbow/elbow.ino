#include "Elbow.h"

#define ELBOW1_PIN 5
#define ELBOW2_PIN 6
#define ELBOW3_PIN 9


Elbow elbow1(ELBOW1_PIN);
Elbow elbow2(ELBOW2_PIN);
Elbow elbow3(ELBOW3_PIN);


void setup() {
  Serial.begin(115200);

  elbow1.init();
  elbow2.init();
  elbow3.init();

  delay(500);
}

void loop() {
  elbow1.reset();
  elbow2.reset();
  elbow3.reset();


  // elbow1.angle(45);
  // Serial.println("e1Pos:\t45");
  // delay(1000);
  // elbow1.reset();
  // Serial.println("e1Pos:\t90");
  // delay(1000);


  // elbow2.angle(135);
  // Serial.println("e2Pos:\t135");
  // delay(1000);
  // elbow2.reset();
  // Serial.println("e2Pos:\t90");
  // delay(1000);


  // elbow3.angle(135);
  // Serial.println("e3Pos:\t135");
  // delay(1000);
  // elbow3.reset();
  // Serial.println("e3Pos:\t90");
  // delay(1000);
}
