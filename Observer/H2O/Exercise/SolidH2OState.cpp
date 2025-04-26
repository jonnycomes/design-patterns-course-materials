#include "SolidH2OState.h"
#include "LiquidH2OState.h"
#include "GasH2OState.h"
#include "H2OState.h"
#include "Temperature.h"
#include <iostream>

SolidH2OState::SolidH2OState() : H2OState() {}

SolidH2OState::~SolidH2OState() {}

void SolidH2OState::handleTemperatureChange(Temperature* temperature) {
  double t = temperature->getCelsius();
  if(t > 0.0) { // Here we must first melt the ice:
    melt();
    _nextH2OState = new LiquidH2OState();
    if(t > 100.0) { // After melting, we may need to evaporate the water:
      H2OState* liquidH2OState = _nextH2OState; // copy of the allocated liquid state
      liquidH2OState->handleTemperatureChange(temperature); // delegate handling to liquid
      H2OState* gasH2OState = liquidH2OState->getNextH2OState(); // store the new gas state
      delete _nextH2OState; // No memory leaks!
      _nextH2OState = gasH2OState; // assign the new gas state 
    }
  }
  else{ _nextH2OState = new SolidH2OState(); } // no change in state otherwise
}

void SolidH2OState::melt() {
  std::cout << "ice is melting...now we have liquid.\n";
}
