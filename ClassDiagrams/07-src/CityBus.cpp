#include "CityBus.h"
#include "Person.h"
#include "Driver.h"

void CityBus::pickUp(Person* passenger) {
  _driver->greet(passenger);
  _passengers.insert(passenger);
  if(passenger->getAge() > 12) {_revenue += 5.25;}
}

double CityBus::getRevenue() {
  return _revenue;
}