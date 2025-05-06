#ifndef CONCRETESTATEA_H
#define CONCRETESTATEA_H

#include "State.h"

class ConcreteStateA : public State {
public:
  ConcreteStateA();
  ~ConcreteStateA();
  void handle();
};

#endif