#ifndef CONCRETEOBSERVER_H
#define CONCRETEOBSERVER_H
  
#include "Observer.h"
#include "ConcreteSubject.h"

class ConcreteObserver : public Observer {
private:
  ConcreteSubject* _subject;
  int _observerState;
public:
  ConcreteObserver(ConcreteSubject*, int = 0);
  int getState();
  void update();
};

#endif