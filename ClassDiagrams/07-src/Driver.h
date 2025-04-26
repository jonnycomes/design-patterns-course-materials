#ifndef DRIVER_H
#define DRIVER_H

#include <string>
#include "Person.h"

class Driver : public Person {
private:
  std::string _driversLicenseNumber;
public:
  Driver(std::string name = "driver", int age = 0, std::string driversLicenseNumber = "invalid DL number");
  void greet(Person*);
};

#endif