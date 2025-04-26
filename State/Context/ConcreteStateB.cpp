#include "ConcreteStateB.h"
#include "ConcreteStateA.h"
#include "State.h"
#include <iostream>

ConcreteStateB::ConcreteStateB() : State() {}

ConcreteStateB::~ConcreteStateB() {}

void ConcreteStateB::handle() {
  std::cout << "...handling the request in state B...\n";
  _nextState = new ConcreteStateA();
}
