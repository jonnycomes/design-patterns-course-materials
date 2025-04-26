#include "SchoolBus.h"
#include "Person.h"
#include "Driver.h"
#include "Student.h"

void SchoolBus::addToRoster(Student* student) {
  _studentRoster.insert(student);
}
void SchoolBus::removeFromRoster(Student* student) {
  _studentRoster.erase(student);
}
void SchoolBus::pickUp(Person* passenger) {
  for(auto student : _studentRoster) {
    if(student->equals(*passenger)) {
      _passengers.insert(passenger);
      _driver->greet(passenger);
    }
  }
}