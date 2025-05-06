#ifndef FACTORY2_H
#define FACTORY2_H

#include "Factory.h"
#include "ProductA.h"
#include "ProductB.h"

class Factory2 : public Factory {
public:
  ProductA* createProductA();
  ProductB* createProductB();
};

#endif