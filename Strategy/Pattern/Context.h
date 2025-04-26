#ifndef CONTEXT_H
#define CONTEXT_H 

#include "Strategy.h"

class Context {
private:
  Strategy* _strategy;
public:
  Context();
  Context(Strategy*);
  void method();
};

#endif
