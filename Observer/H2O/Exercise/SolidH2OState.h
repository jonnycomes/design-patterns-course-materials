#ifndef SOLIDH2OSTATEA_H
#define SOLIDH2OSTATEA_H

#include "SolidH2OState.h"
#include "H2OState.h"
#include "Temperature.h"

class SolidH2OState : public H2OState {
public:
  SolidH2OState();
  ~SolidH2OState();
  void handleTemperatureChange(Temperature*);
  void melt();
};

#endif