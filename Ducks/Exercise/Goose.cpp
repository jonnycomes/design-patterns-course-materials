#include "Goose.h"
#include <iostream>
#include <string>

void Goose::honk() {
  std::cout << "honk\n";
}

std::string Goose::getDescription() {
  return "goose";
}
