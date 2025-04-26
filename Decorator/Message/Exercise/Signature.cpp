#include "Signature.h"
#include "Message.h"
#include "MessageDecorator.h"
#include <string>
#include <iostream>

 Signature::Signature(Message* message, std::string signature) 
          : MessageDecorator(message) {
    _signature = signature;
  }

void Signature::print() {
  // TODO: implement this method.
  
}
