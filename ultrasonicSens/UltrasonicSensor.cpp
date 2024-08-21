#include "UltrasonicSensor.h"


UltrasonicSensor::UltrasonicSensor(byte trigPin, byte echoPin)
{
  this->trigPin = trigPin;
  this->echoPin = echoPin;
}

UltrasonicSensor::UltrasonicSensor(NewPing &sonar) {
  this->sonar(trigPin, echoPin, MAX_DISTANCE) = sonar;
}

void UltrasonicSensor::init() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void UltrasonicSensor::measureDistance() {
  sonar.ping_timer();
}

