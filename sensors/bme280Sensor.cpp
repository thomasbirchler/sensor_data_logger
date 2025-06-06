#include "BME280Sensor.h"

bool BME280Sensor::begin() {
  return bme.begin(0x76);
}

float BME280Sensor::getTemperature() {
  return bme.readTemperature();
}

float BME280Sensor::getPressure() {
  return bme.readPressure() / 100.0F;
}

float BME280Sensor::getHumidity() {
  return bme.readHumidity();
}
