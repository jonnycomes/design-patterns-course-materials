#include <string>
#include <iostream>
#include "Person.h"

using std::string;
using std::cout;

Person::Person(std::string name, int age) {
  _name = name;
  _age = age;
}
string Person::getName() {
  return _name;
}
int Person::getAge() {
  return _age;
}
bool Person::equals(Person person) {
  return _name == person.getName() && _age == person.getAge();
}
void Person::ride() {
  cout << this->getName() << " is riding.\n";
}
