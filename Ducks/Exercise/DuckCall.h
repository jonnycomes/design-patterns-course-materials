#ifndef DUCKCALL_H
#define DUCKCALL_H

#include "Quackable.h"
#include <string>

class DuckCall : public Quackable {
public:
  void quack();
  std::string getDescription();
};

#endif