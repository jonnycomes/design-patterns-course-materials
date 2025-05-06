#include "Bus.h"
#include "Person.h"
#include "Driver.h"
#include <unordered_set>
#include <iostream>

using std::unordered_set;
using std::cout;

Bus::  Bus(int busID) {
  _busID = busID;
}
void Bus::setDriver(Driver* driver) {
  _driver = driver;
}
void Bus::printPassengerList(){
  cout << "Bus " << _busID << " passengers:\n";
  for(auto person : _passengers) {
    cout << person->getName() << '\n';
  }
}
  // virtual void pickUp(Person* passenger) = 0;
void Bus::dropOff(Person* passenger) {
  _passengers.erase(passenger);
}