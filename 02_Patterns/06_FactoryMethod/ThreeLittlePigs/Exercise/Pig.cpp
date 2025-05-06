#include "Pig.h"
#include "House.h"
#include <iostream>

House* Pig::buildHouse() {
  /****************************************************
  TODO 0: Create a variable called house of the 
          appropriate type on the line below.
          After this step is done correctly the program
          should compile without errors. It won't work 
          properly until you finish TODOs 1-4.
  *****************************************************/

  std::cout << "Building a house made of " << house->getMaterial() << "...\n";
  return house;
}
