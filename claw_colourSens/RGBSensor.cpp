#include "RGBSensor.h"

RGBSensor::RGBSensor(Adafruit_TCS34725 &tcs){
  this->tcs = tcs;
}

void RGBSensor::init() {
  // Serial.println("Color View Test!");
  if (tcs.begin()) {
    // Serial.println("Found sensor");
  } else {
    Serial.println("No TCS34725 found... check your connections");
    while (1)
      ;  // halt
  }

  // Convert RGB colors to what humans see
  for (int i = 0; i < 256; i++) {
    float x = i;
    x /= 255;
    x = pow(x, 2.5);
    x *= 255;
    gammatable[i] = 255 - x;
  }
}

void RGBSensor::getRGBraw() {

  tcs.getRGB(&red, &green, &blue);

  // Red
  Serial.print("R:");
  Serial.print(int(red));

  // Green
  Serial.print(" G:");
  Serial.print(int(green));

  // Blue
  Serial.print(" B:");
  Serial.print(int(blue));

  Serial.print("\n");
}

void RGBSensor::getRGB() {
  // delay(20);  // takes 50ms to read

  tcs.getRGB(&red, &green, &blue);

  if ((red < 100) && (green < 100) && (blue < 100)) {
    // blank
  } else if ((red > 255) || (green > 255) || blue > 255) {
    Serial.println("Overrange");
  } else if ((red > green) && (red > blue)) {
    Serial.println("Red");
  } else if ((green > red) && (green > blue)) {
    Serial.println("Green");
  } else if ((blue > red) && (blue > green)) {
    Serial.println("Blue");
  }
}
