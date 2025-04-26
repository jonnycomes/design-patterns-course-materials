#include "SubtotalCost.h"
#include "TaxDecorator.h"
#include "ShippingCostDecorator.h"
#include "Checkout.h"
#include <iostream>

using std::cout;

int main() {
  SubtotalCost subtotal(129.99);
  TaxDecorator afterTax(&subtotal, 0.06);
  ShippingCostDecorator withShipping(&afterTax, 12.50);
  
  cout << "  subtotal: " << subtotal.getCost()      << "\n"
       << "     + tax: " << afterTax.getCost()      << "\n"
       << "+ shipping: " << withShipping.getCost()  << "\n\n";

  // Create a Checkout object with the cost component above:
  Checkout checkout(&withShipping);
  cout << "     total: " << checkout.getTotalCost() << "\n";
}
