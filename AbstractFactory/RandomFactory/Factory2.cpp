#include "Factory2.h"
#include "ProductA.h"
#include "ProductA2.h"
#include "ProductB.h"
#include "ProductB2.h"

ProductA* Factory2::createProductA() {
  return new ProductA2();
}

ProductB* Factory2::createProductB() {
  return new ProductB2();
}
