#ifndef QUACKABLE_H
#define QUACKABLE_H

#include <string>

class Quackable {
public:
  virtual void quack() = 0;
  virtual std::string getDescription() = 0;
  virtual ~Quackable() {}
};

#endif