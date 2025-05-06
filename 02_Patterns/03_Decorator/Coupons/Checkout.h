#ifndef CHECKOUT_H
#define CHECKOUT_H

#include "CostComponent.h"

class Checkout {
private:
  CostComponent* _costComponent;
public:
  Checkout(CostComponent* = nullptr);
  double getTotalCost();
};

#endif
