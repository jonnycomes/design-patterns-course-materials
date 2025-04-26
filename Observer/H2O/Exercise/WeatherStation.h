#ifndef WEATHERSTATION_H
#define WEATHERSTATION_H

#include "Temperature.h"

class WeatherStation {
private:
  Temperature* _temperature;
  /*
  Imagine more weather data here...
  */
public:
  WeatherStation();
  WeatherStation(Temperature*);
  Temperature* getTemperature();
  void setCelsius(double);
  void setFahrenheit(double);
  /*
  Also imagine other weather station methods...
  */
};

#endif