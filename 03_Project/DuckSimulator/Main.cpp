#include "Quackable.h"
#include "MallardDuck.h"
#include "RedheadDuck.h"
#include "QuackCounterDecorator.h"
#include "Quackologist.h"
#include <iostream>

int main() {
  Quackable* duck1 = new QuackCounterDecorator(new MallardDuck());
  Quackable* duck2 = new QuackCounterDecorator(new RedheadDuck());
  Quackologist quackologist;
  duck1->attach(&quackologist);
  duck2->attach(&quackologist);
  duck1->quack();
  duck2->quack();
  std::cout << QuackCounterDecorator::getQuackCount() << "\n";
}