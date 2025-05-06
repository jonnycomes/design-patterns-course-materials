#include "DuckSimulator.h"
#include "Quackable.h"
#include "MallardDuck.h"
#include "RedheadDuck.h"
#include "RubberDuck.h"
#include "DuckCall.h"
#include "Goose.h"
#include <vector>

void DuckSimulator::simulate() {
  Quackable* mallardDuck = new MallardDuck();
  Quackable* redheadDuck = new RedheadDuck();
  Quackable* rubberDuck  = new RubberDuck();
  Quackable* duckCall    = new DuckCall();
  Goose* goose = new Goose();
  std::vector<Quackable*> flock = { mallardDuck, 
                                    redheadDuck, 
                                    rubberDuck,
                                    duckCall    };
  for(auto quacker : flock) {
    quacker->quack();
    delete quacker;
  }
  goose->honk();
  delete goose;
}
