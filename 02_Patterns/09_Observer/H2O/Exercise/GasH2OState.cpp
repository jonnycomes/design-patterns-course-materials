#include "GasH2OState.h"
#include "LiquidH2OState.h"
#include "SolidH2OState.h"
#include "H2OState.h"
#include "Temperature.h"
#include <iostream>

GasH2OState::GasH2OState() : H2OState() {}

GasH2OState::~GasH2OState() {}

void GasH2OState::handleTemperatureChange(Temperature* temperature) {
  // TODO: replace the line below with proper implementation:
  _nextH2OState = new GasH2OState(); 
}

void GasH2OState::condense() {
  std::cout << "...water vapor is condensing...\n";
}

