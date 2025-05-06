#ifndef CITYBUS_H
#define CITYBUS_H

#include "Person.h"
#include "Bus.h"

class CityBus : public Bus {
private:
  double _revenue = 0.0;
public:
  CityBus(int busID) : Bus(busID) {};
  double getRevenue();
  void pickUp(Person*);
};

#endif