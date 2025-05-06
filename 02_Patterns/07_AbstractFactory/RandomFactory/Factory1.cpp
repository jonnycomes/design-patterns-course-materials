#include "Factory1.h"
#include "ProductA.h"
#include "ProductA1.h"
#include "ProductB.h"
#include "ProductB1.h"

ProductA* Factory1::createProductA() {
  return new ProductA1();
}

ProductB* Factory1::createProductB() {
  return new ProductB1();
}
