#ifndef TAXDECORATOR_H
#define TAXDECORATOR_H

#include "CostDecorator.h"
#include "CostComponent.h"

class TaxDecorator : public CostDecorator {
private:
  double _taxRate;
public:
  TaxDecorator(CostComponent* = nullptr, double = 0.0);
  double getCost();
};

#endif
