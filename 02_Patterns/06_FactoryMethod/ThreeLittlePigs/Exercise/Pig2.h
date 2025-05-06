#ifndef PIG2_H
#define PIG2_H

#include "Pig.h"
#include "House.h"

class Pig2 : public Pig {
public:
  House* createHouse();
};

#endif