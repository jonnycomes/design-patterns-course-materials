#ifndef COSTDECORATOR_H
#define COSTDECORATOR_H

#include "CostComponent.h"

class CostDecorator : public CostComponent {
protected:
  CostComponent* _innerComponent;
public:
  CostDecorator(CostComponent* = nullptr);
};

#endif
