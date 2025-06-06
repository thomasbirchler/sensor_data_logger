#include "SerialLogger.h"
#include <Arduino.h>

void SerialLogger::log(float temperature, float pressure, float humidity, int mq7_raw) {
  Serial.print("Temp: "); Serial.print(temperature); Serial.print(" °C\t");
  Serial.print("Pressure: "); Serial.print(pressure); Serial.print(" hPa\t");
  Serial.print("Humidity: "); Serial.print(humidity); Serial.print(" %\t");
  Serial.print("MQ-7 raw: "); Serial.println(mq7_raw);
}
