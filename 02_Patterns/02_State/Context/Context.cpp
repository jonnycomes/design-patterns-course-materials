#include "Context.h"
#include "State.h"
#include "ConcreteStateA.h"

class ConcreteStateA;

Context::Context() {
  _state = new ConcreteStateA();
}

Context::~Context() {
  delete _state;
}

void Context::request() {
  _state->handle();
  State* nextState = _state->getNextState();
  delete _state;
  _state = nextState;
}