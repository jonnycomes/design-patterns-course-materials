#include "SmallMarioState.h"
#include "BigMarioState.h"
#include "DeadMarioState.h"
#include "MarioState.h"
#include <iostream>

SmallMarioState::SmallMarioState() : MarioState() {}

SmallMarioState::~SmallMarioState() {}

void SmallMarioState::eatMushroom() {
  std::cout << "...small Mario ate a mushroom, now he's big...\n";
  _nextMarioState = new BigMarioState();
}

void SmallMarioState::takeHit() {
  std::cout << "...small Mario took a hit, now he's dead...\n";
  _nextMarioState = new DeadMarioState();
}
