#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BME280.h>

#define MQ7_PIN A0
#define SEALEVELPRESSURE_HPA (1013.25)

Adafruit_BME280 bme;

void setup() {
  Serial.begin(9600);
  /*
  if (!bme.begin(0x76)) { // Address might be 0x77 on some modules
    Serial.println("BME280 not found!");
    while (1);
  }"
  */
}

void loop() {
  float temperature = bme.readTemperature();
  float pressure = bme.readPressure() / 100.0F;
  float humidity = bme.readHumidity();

  int mq7_raw = analogRead(MQ7_PIN);

  Serial.print("Temp: "); Serial.print(temperature); Serial.print(" °C\t");
  Serial.print("Pressure: "); Serial.print(pressure); Serial.print(" hPa\t");
  Serial.print("Humidity: "); Serial.print(humidity); Serial.print(" %\t");
  Serial.print("MQ-7 raw: "); Serial.println(mq7_raw);

  delay(1000);
}
