#ifndef SUBTOTOAL_H
#define SUBTOTOAL_H

#include "CostComponent.h"

class SubtotalCost : public CostComponent {
private:
  double _cost;
public:
  SubtotalCost(double = 0.0);
  double getCost();
};

#endif
