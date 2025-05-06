#include <iostream>
#include <string>
#include "ProductA.h"
#include "ProductA1.h"
#include "ProductA2.h"
#include "ProductB.h"
#include "ProductB1.h"
#include "ProductB2.h"
#include "Factory.h"
#include "Factory1.h"
#include "Factory2.h"
// Include your new factory headers here.

int main() {
  Factory* factory = new Factory2(); // modify this line to test your new factories
  
  std::cout << "--------------------------------\n"
            << "Enter A or B to create products.\n"
            << "Enter anything else to quit.    \n"
            << "--------------------------------\n\n";
  std::string input;
  do {
    getline(std::cin, input);
    if(input == "A"){ factory->createProductA(); }
    if(input == "B"){ factory->createProductB(); }    
  } while(input == "A" || input == "B");
}