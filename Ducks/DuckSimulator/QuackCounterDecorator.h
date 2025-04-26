#ifndef QUACKCOUNTERDECORATOR_H
#define QUACKCOUNTERDECORATOR_H

#include "Quackable.h"

class QuackCounterDecorator : public Quackable {
private:
  static int _quackCounter;
  Quackable* _innerComponent;
public:
  QuackCounterDecorator(Quackable* = nullptr);
  void quack();
  std::string getName();
  static int getQuackCount();
};

#endif