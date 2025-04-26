#ifndef CONTEXT_H
#define CONTEXT_H 

#include "State.h"

class Context {
private:
  State* _state;
public:
  Context();
  ~Context();
  void request();
};

#endif