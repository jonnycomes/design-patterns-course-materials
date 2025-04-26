#include "MarioState.h"

MarioState::MarioState() {
  _nextMarioState = nullptr;
}

MarioState::~MarioState() {}

MarioState* MarioState::getNextMarioState() {
  return _nextMarioState;
}
