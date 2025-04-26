#include "Singleton.h"
#include <iostream>

int main() {
  Singleton* s = Singleton::getInstance();
  s->setData(7);
  std::cout << s->getData() << "\n";
  Singleton* t = Singleton::getInstance();
  t->setData(12);
  std::cout << t->getData() << "\n";
  std::cout << s->getData() << "\n";
}