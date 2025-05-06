#ifndef RUBBERDUCK_H
#define RUBBERDUCK_H

#include "Quackable.h"
#include <string>

class RubberDuck : public Quackable {
public:
  void quack();
  std::string getDescription();
};

#endif