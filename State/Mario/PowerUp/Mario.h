#ifndef MARIO_H
#define MARIO_H 

#include "MarioState.h"

class Mario {
private:
  MarioState* _marioState;
public:
  Mario();
  ~Mario();
  void powerUp();
};

#endif