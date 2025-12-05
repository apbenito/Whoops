#include <Arduino.h>

// SuperMinis are inconsistent. It's usually one of these two:
const int buttonPin = 9; // P1.15

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  
}