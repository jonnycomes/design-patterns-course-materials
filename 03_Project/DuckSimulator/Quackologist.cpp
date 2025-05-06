#include "Quackologist.h"
// #include "Subject.h"
#include <string>
#include <iostream>

void Quackologist::update(std::string description) {
  std::cout << "Quackologist: " << description
            << " just quacked.\n";
}