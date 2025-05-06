#ifndef CONCRETESTATEB_H
#define CONCRETESTATEB_H

#include "State.h"

class ConcreteStateB : public State {
public:
  ConcreteStateB();
  ~ConcreteStateB();
  void handle();
};

#endif