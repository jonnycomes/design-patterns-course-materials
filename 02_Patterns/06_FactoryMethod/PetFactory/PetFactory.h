#ifndef PETFACTORY_H
#define PETFACTORY_H

#include <string>
#include "Pet.h"

class PetFactory {
public:
  static Pet* createPet(std::string type, std::string name);
};

#endif