#include "ConcreteSubject.h"

ConcreteSubject::ConcreteSubject(int state) {
  _subjectState = state;
}

int ConcreteSubject::getState() {
  return _subjectState;
}

void ConcreteSubject::setState(int state) {
  _subjectState = state;
}