#ifndef SUBJECT_H
#define SUBJECT_H

#include "MessageDecorator.h"
#include "Message.h"
#include <string>

class Subject : public MessageDecorator {
private:
  std::string _subject;
public:
  Subject(Message*, std::string = "(none)");
  void print();
};

#endif