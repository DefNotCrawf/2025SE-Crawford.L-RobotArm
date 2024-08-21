#include "UltrasonicSensor.h"


UltrasonicSensor::UltrasonicSensor(byte trigPin, byte echoPin)
{
  this->trigPin = trigPin;
  this->echoPin = echoPin;
}

UltrasonicSensor::UltrasonicSensor(NewPing &sonar) {
  this->sonar = sonar;
}

void UltrasonicSensor::init() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void UltrasonicSensor::measureDistance() {
  // code here
}

