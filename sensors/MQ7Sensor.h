#ifndef MQ7_SENSOR_H
#define MQ7_SENSOR_H

class MQ7Sensor {
public:
  MQ7Sensor(int pin);
  int readRaw();

private:
  int _pin;
};

#endif
