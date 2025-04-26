#include "Mario.h"
#include "MarioState.h"
#include "SmallMarioState.h"

Mario::Mario() {
  _marioState = new SmallMarioState();
}

Mario::~Mario() {
  delete _marioState;
}

void Mario::eatMushroom() {
  _marioState->eatMushroom();
  MarioState* nextMarioState = _marioState->getNextMarioState();
  delete _marioState;
  _marioState = nextMarioState;
}

void Mario::takeHit() {
  _marioState->takeHit();
  MarioState* nextMarioState = _marioState->getNextMarioState();
  delete _marioState;
  _marioState = nextMarioState;
}