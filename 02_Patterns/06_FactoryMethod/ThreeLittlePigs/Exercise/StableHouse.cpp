#include "StableHouse.h"
#include <iostream>
#include <string>

StableHouse::StableHouse(std::string material) : House(material) {}

void StableHouse::handleWolfAttack() {
  std::cout << "The wolf huffs and he puffs...but he cannot blow the "
            << getMaterial() << " house down.\n";
}
