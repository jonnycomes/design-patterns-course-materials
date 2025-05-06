#include "TaxDecorator.h"
#include "CostDecorator.h"
#include "CostComponent.h"

TaxDecorator::TaxDecorator(CostComponent* innerComponent, double taxRate)
                : CostDecorator(innerComponent) {
  _taxRate = taxRate;
}

double TaxDecorator::getCost() {
  return (1 + _taxRate) * _innerComponent->getCost();
}
