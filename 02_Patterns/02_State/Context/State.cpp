#include "State.h"

State::State() {
  _nextState = nullptr;
}

State::~State() {}

State* State::getNextState() {
  return _nextState;
}
