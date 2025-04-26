#include "MallardDuck.h"
#include <iostream>
#include <string>

void MallardDuck::quack() {
  std::cout << "quack\n";
}

std::string MallardDuck::getDescription() {
  return "mallard duck";
}
