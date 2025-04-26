#ifndef BUS_H
#define BUS_H

#include "Person.h"
#include "Driver.h"
#include <unordered_set>

class Bus {
protected:
  Driver* _driver;
  std::unordered_set<Person*> _passengers;
  int _busID;
public:
  Bus(int busID);
  void setDriver(Driver*);
  void printPassengerList();
  virtual void pickUp(Person*) = 0;
  void dropOff(Person*);
};

#endif