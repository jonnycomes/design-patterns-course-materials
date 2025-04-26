#ifndef TEMPERATURE
#define TEMPERATURE

class Temperature {
private:
  double _temperature = -10.0; 
public:
  double getCelsius();
  double getFahrenheit();
  void setCelsius(double);
  void setFahrenheit(double);
};

#endif