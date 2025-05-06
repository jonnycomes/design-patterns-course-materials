#include "CostDecorator.h"
#include "CostComponent.h"

CostDecorator::CostDecorator(CostComponent* innerComponent) {
  _innerComponent = innerComponent;
}
