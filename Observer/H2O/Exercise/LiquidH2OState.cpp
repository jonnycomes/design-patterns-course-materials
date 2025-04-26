#include "LiquidH2OState.h"
#include "SolidH2OState.h"
#include "GasH2OState.h"
#include "H2OState.h"
#include "Temperature.h"
#include <iostream>

LiquidH2OState::LiquidH2OState() : H2OState() {}

LiquidH2OState::~LiquidH2OState() {}

void LiquidH2OState::handleTemperatureChange(Temperature* temperature) {
  // TODO: replace the line below with proper implementation:
  _nextH2OState = new LiquidH2OState(); 
}

void LiquidH2OState::freeze() {
  std::cout << "...water is freezing...\n";
}

void LiquidH2OState::evaporate() {
  std::cout << "...water is evaporating...\n";
}
