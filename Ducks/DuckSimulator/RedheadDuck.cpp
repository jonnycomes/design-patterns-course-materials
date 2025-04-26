#include "RedheadDuck.h"
#include <iostream>
#include <string>

void RedheadDuck::quack() {
  std::cout << "quack\n";
  notify();
}

std::string RedheadDuck::getName() {
  return "redhead duck";
}
