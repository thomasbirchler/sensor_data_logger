#ifndef BME280_SENSOR_H
#define BME280_SENSOR_H

#include <Adafruit_BME280.h>
#include "../config.h"

class BME280Sensor {
public:
  bool begin();
  float getTemperature();
  float getPressure();
  float getHumidity();

private:
  Adafruit_BME280 bme;
};

#endif
