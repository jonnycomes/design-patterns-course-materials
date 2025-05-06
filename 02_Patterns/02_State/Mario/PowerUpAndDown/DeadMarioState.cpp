#include "DeadMarioState.h"
#include "MarioState.h"
#include <iostream>

DeadMarioState::DeadMarioState() : MarioState() {}

DeadMarioState::~DeadMarioState() {}

void DeadMarioState::printDeathMessage() {
  std::cout << "------Mario is Dead--------\n";
}

void DeadMarioState::eatMushroom() {
  printDeathMessage();
  _nextMarioState = new DeadMarioState();
}

void DeadMarioState::takeHit() {
  printDeathMessage();
  _nextMarioState = new DeadMarioState();
}