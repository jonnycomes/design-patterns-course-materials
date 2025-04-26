#ifndef SUBJECT_H
#define SUBJECT_H

#include "Observer.h"

class Subject {
private:
  /* Add the data member _observers here with
     whatever data type you think is best.
     Depending on the data type you pick, you
     may also need to include an extra header... */
public:
  void attach(Observer*);
  void dettach(Observer*);
  void notify();
};

#endif