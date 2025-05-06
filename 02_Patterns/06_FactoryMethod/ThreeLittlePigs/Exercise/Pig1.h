#ifndef PIG1_H
#define PIG1_H

#include "Pig.h"
#include "House.h"

class Pig1 : public Pig {
public:
  House* createHouse();
};

#endif