#include "Driver.h"
#include "Person.h"
#include "Student.h"
#include "SchoolBus.h"
#include "CityBus.h"
#include <iostream>

using std::cout;

int main() {
  // Instantiate some people:
  Driver bob("Bob", 40, "ZZ555");
  Driver pam("Pam", 33, "AB123");
  Person alice("Alice", 7);
  Person clara("Clara", 32);
  Student donald("Donald", 13, 4367);
  Student dave("Dave", 12, 5555);
  Student sam("Sam", 11, 4242);
  Student becky("Becky", 12, 3421);
  // Here's a city bus doing stuff:
  CityBus cityBus(101);
  cityBus.setDriver(&bob);
  cityBus.pickUp(&pam);
  cityBus.pickUp(&alice);
  cityBus.pickUp(&clara);
  cityBus.pickUp(&donald);
  cityBus.dropOff(&pam);
  cityBus.printPassengerList();
  cout << "city bus revenue: " << cityBus.getRevenue() << '\n';
  // And here's a school bus:
  SchoolBus schoolBus(231);
  schoolBus.setDriver(&pam);
  schoolBus.addToRoster(&dave);
  schoolBus.addToRoster(&sam);
  schoolBus.addToRoster(&becky);
  schoolBus.pickUp(&dave);
  schoolBus.pickUp(&becky);
  schoolBus.pickUp(&donald);
  schoolBus.pickUp(&alice);
  schoolBus.printPassengerList();
}