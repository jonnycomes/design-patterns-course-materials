#include "BigMarioState.h"
#include "SmallMarioState.h"
#include "MarioState.h"
#include <iostream>

BigMarioState::BigMarioState() : MarioState() {}

BigMarioState::~BigMarioState() {}

void BigMarioState::eatMushroom() {
  std::cout << "...big Mario ate a mushroom...\n";
  _nextMarioState = new BigMarioState();
}

void BigMarioState::takeHit() {
  std::cout << "...big Mario took a hit, now he's small...\n";
  _nextMarioState = new SmallMarioState();
}
