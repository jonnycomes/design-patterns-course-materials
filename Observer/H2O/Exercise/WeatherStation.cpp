#include "WeatherStation.h"
#include "Temperature.h"

WeatherStation::WeatherStation() {}

WeatherStation::WeatherStation(Temperature* temperature) {
  _temperature = temperature;
}

Temperature* WeatherStation::getTemperature() {
  return _temperature;
}

void WeatherStation::setCelsius(double temperature) {
  _temperature->setCelsius(temperature);
}

void WeatherStation::setFahrenheit(double temperature) {
  _temperature->setFahrenheit(temperature);
}
