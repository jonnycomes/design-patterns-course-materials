#ifndef SUBJECT_H
#define SUBJECT_H

#include "Observer.h"
#include <vector>
#include <string>

// class Observer;

class Subject {
private:
  std::vector<Observer*> _observers;
public:
  void notify();
  void attach(Observer*);
  virtual std::string getName() = 0;
};

#endif