#include "H2O.h"
#include "SolidH2OState.h"

H2O::H2O() {
  _h2OState = new SolidH2OState();
}

H2O::H2O(Temperature* temperature) {
  _temperature = temperature;
  _h2OState = new SolidH2OState();
}

H2O::~H2O() {
  delete _h2OState;
}

void H2O::setTemperature(Temperature* temperature) {
  _temperature = temperature;
  _h2OState->handleTemperatureChange(temperature);
  H2OState* nextH2OState = _h2OState->getNextH2OState();
  delete _h2OState;
  _h2OState = nextH2OState;
}
