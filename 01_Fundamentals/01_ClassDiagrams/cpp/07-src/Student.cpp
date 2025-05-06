#include "Student.h"
#include <iostream>

using std::cout;

Student::Student(std::string name, int age, int studentID) 
    : Person(name, age) {
    _studentID = studentID;
  }

void Student::learn() {
  cout << this->getName() << " is learning.\n";
}