# Arduino Sensor Data Logger

This project is a modular and extensible Arduino-based data logger that reads from multiple sensors and logs the data through a configurable backend (e.g., serial output, SD card, etc.).

## Features

- Modular architecture for sensor drivers and data logging.
- Easy-to-read structure with separate files for configuration, sensors, and logging.
- Designed for rapid prototyping and extension to new sensor types or storage options.

## Project Structure

sensor_data_logger/
├── sensor_data_logger.ino # Main Arduino sketch
├── config.h # Central configuration constants (e.g., pin mappings)
├── sensors/ # Custom sensor drivers
│ ├── SensorX.h/.cpp
│ └── SensorY.h/.cpp
├── datalogger/ # Logging interface (e.g., Serial, SD)
│ ├── SerialLogger.h/.cpp
│ └── (optional) SDLogger.h/.cpp

## How to Use

1. Clone or copy the entire project folder.
2. Open the `.ino` file in the Arduino IDE or VS Code. Ensure the folder name matches the `.ino` file.
3. Connect your sensors according to the pin definitions in `config.h`.
4. Upload the sketch to your Arduino board.
5. Open the serial monitor (or other configured logger) to view the logged data.

## Extending the Project

- To add a new sensor:
  - Create a new `.h/.cpp` pair in the `sensors/` directory.
  - Implement a class with a consistent interface for data retrieval.
- To change the logging method:
  - Modify or extend the `datalogger/` classes.
  - Update the logger instance used in the `.ino` file.
