#ifndef SIGNATURE_H
#define SIGNATURE_H

#include "MessageDecorator.h"
#include "Message.h"
#include <string>

class Signature : public MessageDecorator {
private:
  std::string _signature;
public:
  Signature(Message*, std::string = "Anonymous");
  void print();
};

#endif
