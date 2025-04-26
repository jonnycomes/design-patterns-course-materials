#include "QuackCounterDecorator.h"
#include "Quackable.h"

int QuackCounterDecorator::_quackCounter = 0;

QuackCounterDecorator::QuackCounterDecorator(Quackable* innerComponent) {
  _innerComponent = innerComponent;
}

void QuackCounterDecorator::quack() {
  _quackCounter++;
  _innerComponent->quack();
  notify();
}

std::string QuackCounterDecorator::getName() {
  return _innerComponent->getName();
}


int QuackCounterDecorator::getQuackCount() {
  return _quackCounter;
}
