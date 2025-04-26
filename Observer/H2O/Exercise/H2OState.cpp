#include "H2OState.h"
#include "Temperature.h"

H2OState::H2OState() {
  _nextH2OState = nullptr;
}

H2OState::~H2OState() {}

H2OState* H2OState::getNextH2OState() {
  return _nextH2OState;
}
