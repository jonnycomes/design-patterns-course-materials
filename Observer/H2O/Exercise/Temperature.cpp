#include "Temperature.h"

double Temperature::getCelsius() {
  return _temperature;
}

double Temperature::getFahrenheit() {
  return 1.8 * _temperature + 32.0;
}

void Temperature::setCelsius(double temperature) {
  _temperature = temperature;
}

void Temperature::setFahrenheit(double temperature) {
  _temperature =  (temperature - 32.0) * 5.0 / 9.0;
}
