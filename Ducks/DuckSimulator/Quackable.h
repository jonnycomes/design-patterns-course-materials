#ifndef QUACKABLE_H
#define QUACKABLE_H

#include "Subject.h"

class Quackable : public Subject {
public:
  virtual void quack() = 0;
};

#endif