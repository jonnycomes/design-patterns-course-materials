#ifndef LIQUIDH2OSTATEA_H
#define LIQUIDH2OSTATEA_H

#include "LiquidH2OState.h"
#include "H2OState.h"
#include "Temperature.h"

class LiquidH2OState : public H2OState {
public:
  LiquidH2OState();
  ~LiquidH2OState();
  void handleTemperatureChange(Temperature*);
  void freeze();
  void evaporate();
};

#endif