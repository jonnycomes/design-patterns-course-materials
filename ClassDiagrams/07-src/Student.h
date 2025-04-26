#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>

class Student : public Person {
private:
  int _studentID;
public:
  Student(std::string name = "no name", int age = 0, int studentID = 0);
  void learn();
};

#endif
