#include "Subject.h"
#include "Observer.h"

void Subject::attach(Observer* observer) {
  _observers.push_back(observer);
}

void Subject::notify() {
  for(auto ob : _observers) {
    ob->update(getName());
  }
}
