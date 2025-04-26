#include "Subject.h"
#include "Message.h"
#include "MessageDecorator.h"
#include <string>
#include <iostream>

 Subject::Subject(Message* message, std::string subject)
        : MessageDecorator(message) {
    _subject = subject;
  }

void Subject::print() {
  // TODO: implement this method.

}
