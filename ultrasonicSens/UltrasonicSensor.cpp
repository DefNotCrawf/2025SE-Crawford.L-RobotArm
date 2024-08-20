#include "UltrasonicSensor.h"

UltrasonicSensor::UltrasonicSensor(byte trigPin, byte echoPin) {
  this->trigPin = trigPin;
  this->echoPin = echoPin;

}

void UltrasonicSensor::init() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void UltrasonicSensor::measureDistance() {
sonar.ping_cm([max_cm_distance])
}

