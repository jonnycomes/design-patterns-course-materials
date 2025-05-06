#ifndef H20STATE_H
#define H20STATE_H 

#include "Temperature.h"

class H2OState {
protected:
  H2OState* _nextH2OState;
public:
  H2OState();
  virtual ~H2OState();
  H2OState* getNextH2OState();
  virtual void handleTemperatureChange(Temperature*) = 0;
};

#endif