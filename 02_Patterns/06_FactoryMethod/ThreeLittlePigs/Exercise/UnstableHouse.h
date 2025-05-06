#ifndef UNSTABLEHOUSE_H
#define UNSTABLEHOUSE_H

#include "House.h"
#include <string>

class UnstableHouse : public House {
public:
  UnstableHouse(std::string = "");
  void handleWolfAttack();
};

#endif