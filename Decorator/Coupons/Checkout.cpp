#include "Checkout.h"
#include "CostComponent.h"

Checkout::Checkout(CostComponent* costComponent) {
  _costComponent = costComponent;
}

double Checkout::getTotalCost() {
  return _costComponent->getCost();
}
