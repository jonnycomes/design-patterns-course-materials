#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person {
protected:
  std::string _name;
  int _age;
public:
  Person(std::string name = "no name", int age = 0);
  virtual ~Person() {}
  std::string getName();
  int getAge();
  bool equals(Person);
  void ride();
};

#endif