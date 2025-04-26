#include "ConcreteStateA.h"
#include "ConcreteStateB.h"
#include "State.h"
#include <iostream>

ConcreteStateA::ConcreteStateA() : State() {}

ConcreteStateA::~ConcreteStateA() {}

void ConcreteStateA::handle() {
  std::cout << "...handling the request in state A...\n";
  _nextState = new ConcreteStateB();
}
