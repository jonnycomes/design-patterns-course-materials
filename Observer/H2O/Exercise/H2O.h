#ifndef H2O_H
#define H2O_H

#include "H2OState.h"
#include "Temperature.h"

class H2O {
protected:
  H2OState* _h2OState;
  Temperature* _temperature;
public:
  H2O();
  H2O(Temperature* temperature);
  ~H2O();
  void setTemperature(Temperature*);
};

#endif