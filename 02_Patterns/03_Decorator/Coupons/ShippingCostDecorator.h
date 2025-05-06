#ifndef SHIPPINGCOSTDECORATOR_H
#define SHIPPINGCOSTDECORATOR_H

#include "CostDecorator.h"
#include "CostComponent.h"

class ShippingCostDecorator : public CostDecorator {
private:
  double _shippingCost;
public:
  ShippingCostDecorator(CostComponent* = nullptr, double = 0.0);
  double getCost();
};

#endif
