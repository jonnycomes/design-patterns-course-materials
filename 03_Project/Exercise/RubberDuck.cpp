#include "RubberDuck.h"
#include <iostream>
#include <string>

void RubberDuck::quack() {
  std::cout << "squeak\n";
}

std::string RubberDuck::getDescription() {
  return "rubber duck";
}
