#ifndef STABLEHOUSE_H
#define STABLEHOUSE_H

#include "House.h"
#include <string>

class StableHouse : public House {
public:
  StableHouse(std::string = "");
  void handleWolfAttack();
};

#endif