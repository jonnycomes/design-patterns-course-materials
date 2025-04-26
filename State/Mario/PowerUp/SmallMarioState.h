#ifndef SMALLMARIOSTATE_H
#define SMALLMARIOSTATE_H

#include "MarioState.h"

class SmallMarioState : public MarioState {
public:
  SmallMarioState();
  ~SmallMarioState();
  void powerUp();
};

#endif