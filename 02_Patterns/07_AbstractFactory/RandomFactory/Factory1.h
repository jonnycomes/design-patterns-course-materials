#ifndef FACTORY1_H
#define FACTORY1_H

#include "Factory.h"
#include "ProductA.h"
#include "ProductB.h"

class Factory1 : public Factory {
public:
  ProductA* createProductA();
  ProductB* createProductB();
};

#endif