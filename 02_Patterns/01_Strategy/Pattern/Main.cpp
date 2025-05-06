#include "Context.h"
#include "ConcreteStrategyA.h"
#include "ConcreteStrategyB.h"

int main() {
  // Use strategy A:
  ConcreteStrategyA a; 
  Context c1(&a);
  c1.method();

  // Use Strategy B:
  ConcreteStrategyB b;
  Context c2(&b);
  c2.method();
}