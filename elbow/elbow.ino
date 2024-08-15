#include "Elbow.h"

#define ELBOW1_PIN 5
#define ELBOW2_PIN 6
#define ELBOW3_PIN 3


Elbow1 elbow1(ELBOW1_PIN);
Elbow1 elbow2(ELBOW2_PIN);
Elbow1 elbow3(ELBOW3_PIN);


void setup() {
  Serial.begin(115200);

  // elbow1.init();
  elbow2.init();
  elbow3.init();

  delay(500);
}

void loop() {
  // elbow1.reset();
  // elbow2.reset();
  // elbow3.reset();

  // elbow1.angle(135);
  // delay(1000);
  // elbow1.reset();
  // delay(1000);

  elbow2.angle(135);
  delay(1000);
  elbow2.reset();
  delay(1000);

  // elbow3.angle(135);
  // delay(1000);
  // elbow3.reset();
  // delay(1000);

}
