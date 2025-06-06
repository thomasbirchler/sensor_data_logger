#include "config.h"
#include "sensors/BME280Sensor.h"
#include "sensors/MQ7Sensor.h"
#include "datalogger/SerialLogger.h"

BME280Sensor bme280;
MQ7Sensor mq7(MQ7_PIN);
SerialLogger logger;

void setup() {
  Serial.begin(9600);
  bme280.begin();
}

void loop() {
  //float temperature = bme280.getTemperature();
  //temperature = 1;
  float temperature = 1;
  float pressure = bme280.getPressure();
  pressure = 2;
  float humidity = bme280.getHumidity();
  humidity = 3;
  int mq7_raw = mq7.readRaw();

  logger.log(temperature, pressure, humidity, mq7_raw);
  delay(1000);
}
