#include "DuckCall.h"
#include <iostream>
#include <string>

void DuckCall::quack() {
  std::cout << "kwak\n";
}

std::string DuckCall::getDescription() {
  return "duck call";
}
