#include "BigMarioState.h"
#include "MarioState.h"
#include <iostream>

BigMarioState::BigMarioState() : MarioState() {}

BigMarioState::~BigMarioState() {}

void BigMarioState::powerUp() {
  std::cout << "...big Mario ate a mushroom...\n";
  _nextMarioState = new BigMarioState();
}
