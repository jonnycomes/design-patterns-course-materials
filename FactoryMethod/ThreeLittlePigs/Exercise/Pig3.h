#ifndef PIG3_H
#define PIG3_H

#include "Pig.h"
#include "House.h"

class Pig3 : public Pig {
public:
  House* createHouse();
};

#endif