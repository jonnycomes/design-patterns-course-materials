#ifndef CONCRETESUBJECT_H
#define CONCRETESUBJECT_H
  
#include "Subject.h"

class ConcreteSubject : public Subject {
private:
  int _subjectState;
public:
  ConcreteSubject(int = 0);
  int getState();
  void setState(int);
};

#endif