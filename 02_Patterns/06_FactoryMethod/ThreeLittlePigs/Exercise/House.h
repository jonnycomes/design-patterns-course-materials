#ifndef HOUSE_H
#define HOUSE_H

#include <string>

class House {
private:
  std::string _material;
public:
  House(std::string = "");
  virtual void handleWolfAttack() = 0;
  std::string getMaterial();
};

#endif