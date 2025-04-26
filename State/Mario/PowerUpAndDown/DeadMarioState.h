#ifndef DEADMARIOSTATE_H
#define DEADMARIOSTATE_H

#include "MarioState.h"

class DeadMarioState : public MarioState {
private:
  void printDeathMessage();
public:
  DeadMarioState();
  ~DeadMarioState();
  void eatMushroom();
  void takeHit();
};

#endif