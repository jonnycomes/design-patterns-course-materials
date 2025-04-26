#ifndef PIG_H
#define PIG_H

#include "House.h"

class Pig {
public:
  House* buildHouse();
  virtual House* createHouse() = 0;
};

#endif