#include "Elbow.h"

#include <Servo.h>

Servo myservo1;
// Servo& myservo2;
// Servo& myservo3;


Elbow1::Elbow1(int pin) {
  _pin = pin;
}

void Elbow1::init() {
  myservo1.attach(_pin);
  delay(1000);
}

void Elbow1::init(int initialPos) {
  myservo1.attach(_pin);
  myservo1.write(initialPos);
}

void Elbow1::angle(int Pos) {
  myservo1.write(Pos);
  delay(50);
}

void Elbow1::range() {
  int i = 0;
  do {
    myservo1.write(i);
    Serial.print("ePos:\t");
    Serial.println(i);
    i++;
    delay(100);
  } while (i <= 180);
}

void Elbow1::reset(){
  myservo1.write(90);
  delay(50);
}

// Elbow2::Elbow2(int pin) {
//   this->pin = pin;
// }

// void Elbow2::init() {
//   myservo2.attach(pin);
//   delay(1000);
// }

// void Elbow2::init(int initialPos) {
//   myservo2.attach(pin);
//   myservo2.write(initialPos);
// }

// void Elbow2::angle(int Pos) {
//   myservo2.write(Pos);
//   delay(50);
// }

// void Elbow2::range() {
//   int i = 0;
//   do {
//     myservo2.write(i);
//     Serial.print("ePos:\t");
//     Serial.println(i);
//     i++;
//     delay(100);
//   } while (i <= 180);
// }

// void Elbow2::reset(){
//   myservo2.write(90);
//   delay(50);
// }

// Elbow3::Elbow3(int pin) {
//   this->pin = pin;
// }

// void Elbow3::init() {
//   myservo2.attach(pin);
//   delay(1000);
// }

// void Elbow3::init(int initialPos) {
//   myservo3.attach(pin);
//   myservo3.write(initialPos);
// }

// void Elbow3::angle(int Pos) {
//   myservo3.write(Pos);
//   delay(50);
// }

// void Elbow3::range() {
//   int i = 0;
//   do {
//     myservo3.write(i);
//     Serial.print("ePos:\t");
//     Serial.println(i);
//     i++;
//     delay(100);
//   } while (i <= 180);
// }

// void Elbow3::reset(){
//   myservo3.write(90);
//   delay(50);
// }