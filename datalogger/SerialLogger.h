#ifndef SERIAL_LOGGER_H
#define SERIAL_LOGGER_H

class SerialLogger {
public:
  void log(float temperature, float pressure, float humidity, int mq7_raw);
};

#endif
