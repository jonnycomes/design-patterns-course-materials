#include "Message.h"
#include "SimpleMessage.h"
#include "Subject.h"
#include "Signature.h"

int main() {
  SimpleMessage sm1("Hello World!\n");
  Message* message1 = new Subject(new Signature(&sm1));
  message1->print();

  SimpleMessage  sm2("A decorator is a wrapper, but not all wrappers are decorators...\n");
  Message* message2 = new Signature(new Subject(&sm2, "wrappers"), "Dr. Comes\nMAPS Department\nThe College of Idaho");
  message2->print();
}
