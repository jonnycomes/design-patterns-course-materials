#include "Mario.h"
#include "MarioState.h"
#include "SmallMarioState.h"

Mario::Mario() {
  _marioState = new SmallMarioState();
}

Mario::~Mario() {
  delete _marioState;
}

void Mario::powerUp() {
  _marioState->powerUp();
  MarioState* nextMarioState = _marioState->getNextMarioState();
  delete _marioState;
  _marioState = nextMarioState;
}