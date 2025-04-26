#ifndef SCHOOLBUS_H
#define SCHOOLBUS_H

#include "Bus.h"
#include "Person.h"
#include "Student.h"
#include <unordered_set>

class SchoolBus : public Bus {
private:
  std::unordered_set<Student*> _studentRoster;
public:
  SchoolBus(int busID) : Bus(busID) {};
  void addToRoster(Student*);
  void removeFromRoster(Student*);
  void pickUp(Person*);
};

#endif