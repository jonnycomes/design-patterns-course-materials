#include "House.h"
#include "Pig.h"
#include "PigFactory.h"
#include <iostream>

int main() {
  int input;
  do {
  std::cout << "Which number pig? ";
  std::cin >> input;
  } while(input < 1 || input > 3);
  Pig* pig = PigFactory::createPig(input);
  House* house = pig->buildHouse();
  house->handleWolfAttack();
}
