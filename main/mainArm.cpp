#include "mainArm.h"

mainArm::mainArm(byte BasePin, byte Elbow1Pin, byte Elbow2Pin, byte Elbow3Pin, byte ClawPin)
  : BasePin(BasePin),
    Elbow1Pin(Elbow1Pin),
    Elbow2Pin(Elbow2Pin),
    Elbow3Pin(Elbow3Pin),
    ClawPin(ClawPin),
    base(BasePin),
    elbow1(Elbow1Pin),
    elbow2(Elbow2Pin),
    elbow3(Elbow3Pin),
    claw(ClawPin) {
  // All member variables are initialized here
}

mainArm::mainArm(Base &base, Elbow &elbow1, Elbow &elbow2, Elbow &elbow3, Claw &claw)
  : base(base), elbow1(elbow1), elbow2(elbow2), elbow3(elbow3), claw(claw) {
}

void mainArm::init() {
  base.init();
  delay(100);
  claw.init();
  delay(100);
  elbow1.init();
  delay(100);
  elbow2.init();
  delay(100);
  elbow3.init();
  delay(100);
  Serial.println("All servos initialized");

  // claw.open();
  // Serial.println("Claw Open");
  // delay(2000);
  // claw.close();
  // Serial.println("Claw Close");
}

void mainArm::getColour() {

  base.moveTo(92);
  Serial.println("Base: 92");
  delay(500);

  elbow1.angle(136);
  Serial.println("Elbow1: 136");
  delay(500);

  elbow2.angle(74);
  Serial.println("Elbow2: 74");
  delay(500);

  elbow3.angle(10);
  Serial.println("Elbow3: 10");
}

void mainArm::getBlock() {
  claw.open();
  Serial.println("Claw Open");
  delay(500);
  
  base.moveTo(92);
  Serial.println("Base: 92");
  delay(500);

  elbow1.angle(135);
  Serial.println("Elbow1: 142");
  delay(500);

  elbow2.angle(70);
  Serial.println("Elbow2: 65");
  delay(1000);
  
  elbow3.angle(0);
  Serial.println("Elbow3: 0");
  delay(1000);


  claw.close();
  Serial.println("Claw Close");
  delay(500);

  base.moveTo(90);
  Serial.println("Base: 90");
  delay(500);
  
  elbow1.angle(90);
  Serial.println("Elbow1: 90");
  delay(500);

  elbow2.angle(90);
  Serial.println("Elbow2: 90");
  delay(500);

  elbow3.angle(90);
  Serial.println("Elbow3: 90");
  delay(500);
}