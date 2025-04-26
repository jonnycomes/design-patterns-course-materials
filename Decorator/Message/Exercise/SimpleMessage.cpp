#include "SimpleMessage.h"
#include <string>
#include <iostream>

SimpleMessage::SimpleMessage(std::string message) {
  _message = message;
}

void SimpleMessage::print() {
  std::cout << _message;
}
