#include "ConcreteObserver.h"

ConcreteObserver::ConcreteObserver(ConcreteSubject* subject, int state) {
  _subject = subject;
  _observerState = state;
  subject->attach(this);
}

int ConcreteObserver::getState() {
  return _observerState;
}

void ConcreteObserver::update() {
  // TODO: implement this method  
}