#ifndef REDHEADDUCK_H
#define REDHEADDUCK_H

#include "Quackable.h"
#include <string>

class RedheadDuck : public Quackable {
public:
  void quack();
  std::string getName();
};

#endif