#ifndef MALLARDDUCK_H
#define MALLARDDUCK_H

#include "Quackable.h"
#include <string>

class MallardDuck : public Quackable {
public:
  void quack();
  std::string getName();
};

#endif