#ifndef REFERENCESECTION_H
#define REFERENCESECTION_H

#include "BookComponent.h"
#include <string>
#include <vector>

class ReferenceSection : public BookComponent {
private:
  std::vector<std::string> _references;
public:
  void addReference(std::string);
  void print();
};

#endif