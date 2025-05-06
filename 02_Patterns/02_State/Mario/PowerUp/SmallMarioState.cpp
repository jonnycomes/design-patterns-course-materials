#include "SmallMarioState.h"
#include "BigMarioState.h"
#include "MarioState.h"
#include <iostream>

SmallMarioState::SmallMarioState() : MarioState() {}

SmallMarioState::~SmallMarioState() {}

void SmallMarioState::powerUp() {
  std::cout << "...small Mario ate a mushroom, now he's big...\n";
  _nextMarioState = new BigMarioState();
}
