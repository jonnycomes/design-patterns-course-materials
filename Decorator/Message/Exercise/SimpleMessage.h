#ifndef SIMPLEMESSAGE_H
#define SIMPLEMESSAGE_H

#include "Message.h"
#include <string>

class SimpleMessage : public Message {
private:
  std::string _message;
public:
  SimpleMessage(std::string = "\n");
  void print();
};

#endif