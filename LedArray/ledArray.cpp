#include "ledArray.h"

#include <ArduinoGraphics.h>
#include <Arduino_LED_Matrix.h>

ArduinoLEDMatrix matrix;




void ledArray::init() {
  matrix.begin();
  matrix.textFont(Font_5x7);
  matrix.textScrollSpeed(100);
  matrix.stroke(0xFF, 0, 0);
  matrix.beginText(0, 1, 0xFF, 0, 0);
}

void ledArray::print(const char* text) {
  matrix.print(text);
  matrix.endText(SCROLL_LEFT);
}

void ledArray::printframe(const uint32_t* frame) {
  matrix.loadFrame(frame);
  delay(200);
}