#ifndef GASH2OSTATEA_H
#define GASH2OSTATEA_H

#include "GasH2OState.h"
#include "H2OState.h"
#include "Temperature.h"

class GasH2OState : public H2OState {
public:
  GasH2OState();
  ~GasH2OState();
  void handleTemperatureChange(Temperature*);
  void condense();
};

#endif