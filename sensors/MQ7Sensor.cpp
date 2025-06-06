#include "MQ7Sensor.h"
#include <Arduino.h>

MQ7Sensor::MQ7Sensor(int pin) : _pin(pin) {}

int MQ7Sensor::readRaw() {
  return analogRead(_pin);
}