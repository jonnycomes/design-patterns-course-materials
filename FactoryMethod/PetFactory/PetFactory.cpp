#include "PetFactory.h"
#include "Pet.h"
#include "PetDog.h"
#include "PetCat.h"
#include "PetFish.h"
#include "PetSnake.h"

Pet* PetFactory::createPet(std::string type, std::string name) {
  switch(type) {
    case "dog"   : return new PetDog(name);
    case "cat"   : return new PetCat(name);
    case "fish"  : return new PetFish(name);
    case "snake" : return new PetSnake(name);
    default      : return nullptr;
  }
}