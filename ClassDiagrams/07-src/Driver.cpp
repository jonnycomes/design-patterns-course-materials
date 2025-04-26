#include "Driver.h"
#include "Person.h"
#include <iostream>
#include <string>

using std::cout;
using std::string;

Driver::Driver(string name, int age, string driversLicenseNumber) 
  : Person(name, age) {
  _driversLicenseNumber = driversLicenseNumber;
}
void Driver::greet(Person* passenger) {
    cout << "Welcome to the bus " << passenger->getName() << ".\n";
  }