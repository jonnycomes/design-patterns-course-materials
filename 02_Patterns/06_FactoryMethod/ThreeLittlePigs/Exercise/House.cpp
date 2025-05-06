#include "House.h"
#include <string>

House::House(std::string material) {
  _material = material;
}

std::string House::getMaterial() {
  return _material;
}