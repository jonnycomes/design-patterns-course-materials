#include "MallardDuck.h"
#include <iostream>
#include <string>

void MallardDuck::quack() {
  std::cout << "quack\n";
  notify();
}

std::string MallardDuck::getName() {
  return "mallard duck";
}
