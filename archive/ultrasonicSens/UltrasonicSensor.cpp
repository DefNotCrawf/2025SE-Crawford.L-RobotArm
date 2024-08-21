#include "UltrasonicSensor.h"


UltrasonicSensor::UltrasonicSensor(byte trigPin, byte echoPin)
{
  this->trigPin = trigPin;
  this->echoPin = echoPin;
}

UltrasonicSensor::UltrasonicSensor(NewPing &radar) {
  this->radar = radar;
}

void UltrasonicSensor::init() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

long UltrasonicSensor::measureDistance() {
  delay(1000);

  
  Serial.print("Distance: ");
  Serial.print(radar.ping_cm());
  Serial.print(" cm");

  Serial.print("\n");

}

