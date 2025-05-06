#ifndef BIGMARIOSTATE_H
#define BIGMARIOSTATE_H

#include "MarioState.h"

class BigMarioState : public MarioState {
public:
  BigMarioState();
  ~BigMarioState();
  void powerUp();
};

#endif