#include "ShippingCostDecorator.h"
#include "CostDecorator.h"
#include "CostComponent.h"

ShippingCostDecorator::ShippingCostDecorator(CostComponent* innerComponent, double shippingCost)
                     : CostDecorator(innerComponent) {
  _shippingCost = shippingCost;
}

double ShippingCostDecorator::getCost() {
  return _shippingCost + _innerComponent->getCost();
}
