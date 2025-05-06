#include "UnstableHouse.h"
#include <iostream>
#include <string>

UnstableHouse::UnstableHouse(std::string material) : House(material) {}

void UnstableHouse::handleWolfAttack() {
  std::cout << "The wolf huffs and he puffs and he blows the "
            << getMaterial() << " house down.\n";
}
